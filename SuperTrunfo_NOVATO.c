#include <stdio.h>

int main() {
   // Declaração das variáveis para 3 cidades
   char codigo1[4], codigo2[4], codigo3[4];
   char nome1[50], nome2[50], nome3[50];
   int populacao1, populacao2, populacao3;
   float area1, area2, area3;
   float pib1, pib2, pib3;
   int pontos1, pontos2, pontos3;
   
   printf("Bem-vindo ao Super Trunfo Cidades!\n\n");
   
   // Cadastro da primeira cidade
   printf("=== Cadastro da Cidade 1 ===\n");
   printf("Digite o código da cidade (ex: A01): ");
   scanf("%s", codigo1);
   printf("Digite o nome da cidade: ");
   scanf(" %[^\n]", nome1);
   printf("Digite a população: ");
   scanf("%d", &populacao1);
   printf("Digite a área (km²): ");
   scanf("%f", &area1);
   printf("Digite o PIB (em bilhões): ");
   scanf("%f", &pib1);
   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &pontos1);
   
   // Cadastro da segunda cidade
   printf("\n=== Cadastro da Cidade 2 ===\n");
   printf("Digite o código da cidade (ex: A01): ");
   scanf("%s", codigo2);
   printf("Digite o nome da cidade: ");
   scanf(" %[^\n]", nome2);
   printf("Digite a população: ");
   scanf("%d", &populacao2);
   printf("Digite a área (km²): ");
   scanf("%f", &area2);
   printf("Digite o PIB (em bilhões): ");
   scanf("%f", &pib2);
   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &pontos2);
   
   // Cadastro da terceira cidade
   printf("\n=== Cadastro da Cidade 3 ===\n");
   printf("Digite o código da cidade (ex: A01): ");
   scanf("%s", codigo3);
   printf("Digite o nome da cidade: ");
   scanf(" %[^\n]", nome3);
   printf("Digite a população: ");
   scanf("%d", &populacao3);
   printf("Digite a área (km²): ");
   scanf("%f", &area3);
   printf("Digite o PIB (em bilhões): ");
   scanf("%f", &pib3);
   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &pontos3);
   
   // Exibição das cidades cadastradas
   printf("\n=== Cidades Cadastradas ===\n");
   
   printf("\nCidade 1:");
   printf("\nCódigo: %s", codigo1);
   printf("\nNome: %s", nome1);
   printf("\nPopulação: %d", populacao1);
   printf("\nÁrea: %.2f km²", area1);
   printf("\nPIB: %.2f bilhões", pib1);
   printf("\nPontos Turísticos: %d\n", pontos1);
   
   printf("\nCidade 2:");
   printf("\nCódigo: %s", codigo2);
   printf("\nNome: %s", nome2);
   printf("\nPopulação: %d", populacao2);
   printf("\nÁrea: %.2f km²", area2);
   printf("\nPIB: %.2f bilhões", pib2);
   printf("\nPontos Turísticos: %d\n", pontos2);
   
   printf("\nCidade 3:");
   printf("\nCódigo: %s", codigo3);
   printf("\nNome: %s", nome3);
   printf("\nPopulação: %d", populacao3);
   printf("\nÁrea: %.2f km²", area3);
   printf("\nPIB: %.2f bilhões", pib3);
   printf("\nPontos Turísticos: %d\n", pontos3);
   
   return 0;
}