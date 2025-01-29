#include <stdio.h>

// Estrutura para armazenar os dados da cidade
typedef struct {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float super_poder;
} Cidade;

// Função para calcular propriedades derivadas
void calcular_propriedades(Cidade *cidade) {
    cidade->densidade_populacional = cidade->populacao / cidade->area;
    cidade->super_poder = cidade->populacao + cidade->area + cidade->pib + cidade->pontos_turisticos;
}

// Função para cadastrar cidades
void cadastrar_cidades(Cidade cidades[], int *quantidade) {
    while (1) {
        printf("Código da cidade (ex: A01, B02) ou 'sair': ");
        scanf("%s", cidades[*quantidade].codigo);
        
        if (cidades[*quantidade].codigo[0] == 's' || cidades[*quantidade].codigo[0] == 'S') {
            break;
        }
        
        printf("Nome da cidade: ");
        getchar(); // Limpa o buffer antes de ler a string
        fgets(cidades[*quantidade].nome, sizeof(cidades[*quantidade].nome), stdin);
        
        for (int i = 0; cidades[*quantidade].nome[i] != '\0'; i++) {
            if (cidades[*quantidade].nome[i] == '\n') {
                cidades[*quantidade].nome[i] = '\0';
                break;
            }
        }
        
        printf("População: ");
        scanf("%d", &cidades[*quantidade].populacao);
        printf("Área (km²): ");
        scanf("%f", &cidades[*quantidade].area);
        printf("PIB (bilhões): ");
        scanf("%f", &cidades[*quantidade].pib);
        printf("Pontos turísticos: ");
        scanf("%d", &cidades[*quantidade].pontos_turisticos);
        
        calcular_propriedades(&cidades[*quantidade]);
        (*quantidade)++;
    }
}

// Exibir cidades cadastradas
void exibir_cidades(Cidade cidades[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("\nCódigo: %s\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", cidades[i].densidade_populacional);
        printf("Super Poder: %.2f\n", cidades[i].super_poder);
    }
}

// Função para comparar duas cidades
void comparar_cidades(Cidade c1, Cidade c2) {
    printf("\nComparação entre %s e %s:\n", c1.nome, c2.nome);
    
    printf("Densidade Populacional: %s vence\n", (c1.densidade_populacional < c2.densidade_populacional) ? c1.nome : c2.nome);
    printf("População: %s vence\n", (c1.populacao > c2.populacao) ? c1.nome : c2.nome);
    printf("Área: %s vence\n", (c1.area > c2.area) ? c1.nome : c2.nome);
    printf("PIB: %s vence\n", (c1.pib > c2.pib) ? c1.nome : c2.nome);
    printf("Pontos Turísticos: %s vence\n", (c1.pontos_turisticos > c2.pontos_turisticos) ? c1.nome : c2.nome);
    printf("Super Poder: %s vence\n", (c1.super_poder > c2.super_poder) ? c1.nome : c2.nome);
}

// Função principal
int main() {
    Cidade cidades[100];
    int quantidade = 0;
    printf("Super Trunfo - Cidades\n");
    cadastrar_cidades(cidades, &quantidade);
    exibir_cidades(cidades, quantidade);
    
    if (quantidade >= 2) {
        int i1, i2;
        printf("\nEscolha duas cidades para comparar (0 a %d): ", quantidade - 1);
        scanf("%d %d", &i1, &i2);
        
        if (i1 >= 0 && i1 < quantidade && i2 >= 0 && i2 < quantidade && i1 != i2) {
            comparar_cidades(cidades[i1], cidades[i2]);
        } else {
            printf("\nEscolha inválida!\n");
        }
    }
    return 0;
}