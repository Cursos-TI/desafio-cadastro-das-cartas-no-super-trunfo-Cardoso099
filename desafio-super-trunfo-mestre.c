#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char codigoCarta1[4];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char codigoCarta2[4];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
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
    scanf("%lu", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita para a primeira carta
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Cálculo da Densidade Populacional e PIB per Capita para a segunda carta
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Comparação dos atributos
    int vitoriaCarta1 = 0, vitoriaCarta2 = 0;

    // Comparação de População
    if (populacao1 > populacao2) {
        vitoriaCarta1++;
        printf("\nAtributo 'População': Carta 1 vence!\n");
    } else if (populacao1 < populacao2) {
        vitoriaCarta2++;
        printf("\nAtributo 'População': Carta 2 vence!\n");
    } else {
        printf("\nAtributo 'População': Empate!\n");
    }

    // Comparação de Área
    if (area1 > area2) {
        vitoriaCarta1++;
        printf("Atributo 'Área': Carta 1 vence!\n");
    } else if (area1 < area2) {
        vitoriaCarta2++;
        printf("Atributo 'Área': Carta 2 vence!\n");
    } else {
        printf("Atributo 'Área': Empate!\n");
    }

    // Comparação de PIB
    if (pib1 > pib2) {
        vitoriaCarta1++;
        printf("Atributo 'PIB': Carta 1 vence!\n");
    } else if (pib1 < pib2) {
        vitoriaCarta2++;
        printf("Atributo 'PIB': Carta 2 vence!\n");
    } else {
        printf("Atributo 'PIB': Empate!\n");
    }

    // Comparação de Pontos Turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        vitoriaCarta1++;
        printf("Atributo 'Pontos Turísticos': Carta 1 vence!\n");
    } else if (pontosTuristicos1 < pontosTuristicos2) {
        vitoriaCarta2++;
        printf("Atributo 'Pontos Turísticos': Carta 2 vence!\n");
    } else {
        printf("Atributo 'Pontos Turísticos': Empate!\n");
    }

    // Comparação de Densidade Populacional (menor valor vence)
    if (densidadePopulacional1 < densidadePopulacional2) {
        vitoriaCarta1++;
        printf("Atributo 'Densidade Populacional': Carta 1 vence!\n");
    } else if (densidadePopulacional1 > densidadePopulacional2) {
        vitoriaCarta2++;
        printf("Atributo 'Densidade Populacional': Carta 2 vence!\n");
    } else {
        printf("Atributo 'Densidade Populacional': Empate!\n");
    }

    // Comparação de PIB per Capita
    if (pibPerCapita1 > pibPerCapita2) {
        vitoriaCarta1++;
        printf("Atributo 'PIB per Capita': Carta 1 vence!\n");
    } else if (pibPerCapita1 < pibPerCapita2) {
        vitoriaCarta2++;
        printf("Atributo 'PIB per Capita': Carta 2 vence!\n");
    } else {
        printf("Atributo 'PIB per Capita': Empate!\n");
    }

    // Cálculo do Super Poder (Soma dos atributos, com a densidade populacional invertida)
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    printf("\n--- Super Poder ---\n");
    printf("Super Poder da Carta 1: %.2f\n", superPoder1);
    printf("Super Poder da Carta 2: %.2f\n", superPoder2);

    // Determinação do vencedor
    if (superPoder1 > superPoder2) {
        printf("\nA Carta 1 vence no Super Poder!\n");
    } else if (superPoder1 < superPoder2) {
        printf("\nA Carta 2 vence no Super Poder!\n");
    } else {
        printf("\nSuper Poder: Empate!\n");
    }

    return 0;
}