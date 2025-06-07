#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char codigoCarta1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char codigoCarta2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigoCarta2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Codigo: %s\n", codigoCarta1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Codigo: %s\n", codigoCarta2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}