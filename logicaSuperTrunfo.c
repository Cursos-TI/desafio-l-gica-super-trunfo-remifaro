#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main()
{
    // Definção das variáveis:
    unsigned long int populacaoA1;
    float areaA1;
    float pibA1;
    int numPontosTuristicosA1;

    unsigned long int populacaoB4;
    float areaB4;
    float pibB4;
    int numPontosTuristicosB4;

    printf("\nBem vindo ao Cartas Super Trunfo!!!");
    printf("\nVamos iniciar cadastrando suas cartas.");

    // Cadastro das Cartas:
    printf("\nDigite o número da População da carta A1:");
    scanf("%lu", &populacaoA1);
    printf("Digite o número da Área da carta A1:");
    scanf("%f", &areaA1);
    printf("Digite o número do PIB da carta A1:");
    scanf("%f", &pibA1);
    printf("Digite o número de pontos turísticos da carta A1:");
    scanf("%d", &numPontosTuristicosA1);

    printf("Digite o número da População da carta B4:");
    scanf("%lu", &populacaoB4);
    printf("Digite o número da Área da carta B4:");
    scanf("%f", &areaB4);
    printf("Digite o número do PIB da carta B4:");
    scanf("%f", &pibB4);
    printf("Digite o número de pontos turísticos da carta B4:");
    scanf("%d", &numPontosTuristicosB4);

    // Cálculos a serem feitos:
    float densidadePopulacionalA1 = (float)populacaoA1 / areaA1;
    float pibPerCapitaA1 = (pibA1 * 1000000000.0) / populacaoA1;

    float densidadePopulacionalB4 = (float)populacaoB4 / areaB4;
    float pibPerCapitaB4 = (pibB4 * 1000000000.0) / populacaoB4;

    float superPoderA1 = (float)populacaoA1 + areaA1 + pibA1 + numPontosTuristicosA1 + (1.0 / densidadePopulacionalA1) + pibPerCapitaA1;
    float superPoderB4 = (float)populacaoB4 + areaB4 + pibB4 + numPontosTuristicosB4 + (1.0 / densidadePopulacionalB4) + pibPerCapitaB4;

    // Exibição dos Dados das Cartas:
    printf("\nExcelente!\n");

    printf("\nEssa é a sua carta A1:\n");
    printf("\nPopulação: %lu\n", populacaoA1);
    printf("Área: %.2f km²\n", areaA1);
    printf("PIB: %.2f bilhões de reais\n", pibA1);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicosA1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalA1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaA1);
    printf("Super Poder: %.6f\n", superPoderA1);

    printf("\nEssa é a sua carta B4:\n");
    printf("\nPopulação: %lu\n", populacaoB4);
    printf("Área: %.2f km²\n", areaB4);
    printf("PIB: %.2f bilhões de reais\n", pibB4);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicosB4);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalB4);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaB4);
    printf("Super Poder: %.6f\n", superPoderB4);

    // Comparações e pontuação
    int pontosA1 = 0;
    int pontosB4 = 0;

    // Comparações 
    if (populacaoA1 > populacaoB4)
    {
        printf("\nPopulação: 1\n");
        pontosA1++;
    }
    else
    {
        printf("População: 0\n");
        pontosB4++;
    }

    if (areaA1 > areaB4)
    {
        printf("Área: 1\n");
        pontosA1++;
    }
    else
    {
        printf("Área: 0\n");
        pontosB4++;
    }

    if (pibA1 > pibB4)
    {
        printf("PIB: 1\n");
        pontosA1++;
    }
    else
    {
        printf("PIB: 0\n");
        pontosB4++;
    }

    if (numPontosTuristicosA1 > numPontosTuristicosB4)
    {
        printf("Pontos turísticos: 1\n");
        pontosA1++;
    }
    else
    {
        printf("Pontos turísticos: 0\n");
        pontosB4++;
    }

    if (densidadePopulacionalA1 < densidadePopulacionalB4)
    {
        printf("Densidade Populacional (menor vence): 1\n");
        pontosA1++;
    }
    else
    {
        printf("Densidade Populacional (menor vence): 0\n");
        pontosB4++;
    }

    if (pibPerCapitaA1 > pibPerCapitaB4)
    {
        printf("PIB per Capita: 1\n");
        pontosA1++;
    }
    else
    {
        printf("PIB per Capita: 0\n");
        pontosB4++;
    }

    if (superPoderA1 > superPoderB4)
    {
        printf("Super Poder: 1\n");
        pontosA1++;
    }
    else
    {
        printf("Super Poder: 0\n");
        pontosB4++;
    }

    printf("\n--- Pontuação Final ---\n");
    printf("Carta A1: %d ponto(s)\n", pontosA1);
    printf("Carta B4: %d ponto(s)\n", pontosB4);

    if (pontosA1 > pontosB4)
        printf("\n🏆 A Carta A1 é a grande vencedora! 🏆\n");
    else if (pontosB4 > pontosA1)
        printf("\n🏆 A Carta B4 é a grande vencedora! 🏆\n");
    else
        printf("\nEmpate entre as cartas!\n");

    return 0;
}
