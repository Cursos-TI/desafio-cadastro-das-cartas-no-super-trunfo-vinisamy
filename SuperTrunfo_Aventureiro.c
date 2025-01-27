#include <stdio.h>

// Estrutura para armazenar os dados da cidade
typedef struct {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

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
        
        // Removendo a quebra de linha manualmente
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
    }
}

// Função principal
int main() {
    Cidade cidades[100];
    int quantidade = 0;
    printf("Super Trunfo - Cidades\n");
    cadastrar_cidades(cidades, &quantidade);
    exibir_cidades(cidades, quantidade);
    return 0;
}
