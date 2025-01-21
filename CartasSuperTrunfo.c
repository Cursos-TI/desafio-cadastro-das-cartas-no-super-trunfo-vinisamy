#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para armazenar os dados da cidade
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
        char codigo[4];
        printf("Informe o código da cidade (ex: A01, B02) ou 'sair' para finalizar: ");
        scanf("%s", codigo);
        if (strcmp(codigo, "sair") == 0) {
            break;
        }

        strcpy(cidades[*quantidade].codigo, codigo);
        printf("Nome da cidade: ");
        scanf(" %[^\n]", cidades[*quantidade].nome);
        printf("População: ");
        scanf("%d", &cidades[*quantidade].populacao);
        printf("Área (km²): ");
        scanf("%f", &cidades[*quantidade].area);
        printf("PIB (em bilhões): ");
        scanf("%f", &cidades[*quantidade].pib);
        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[*quantidade].pontos_turisticos);
        (*quantidade)++;
    }
}

// Função para exibir as cidades cadastradas
void exibir_cidades(Cidade cidades[], int quantidade) {
    printf("\n=== Cidades Cadastradas ===\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nCódigo: %s\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cidades[i].pontos_turisticos);
    }
}

// Função principal do programa
int main() {
    Cidade cidades[100]; // Definição de um array para armazenar até 100 cidades
    int quantidade = 0;
    printf("Bem-vindo ao Super Trunfo - Países!\n");
    cadastrar_cidades(cidades, &quantidade);
    exibir_cidades(cidades, quantidade);
    return 0;
}