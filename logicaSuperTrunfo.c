#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main()
{
    // Definção das variáveis:
    char nomeA1[50];
    unsigned long int populacaoA1;
    float areaA1;
    float pibA1;
    int numPontosTuristicosA1;

    char nomeB4[50];
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

     // Menu Interativo:
     int opcao;
     printf("\n\n📋 Escolha o atributo para comparar:\n");
     printf("1 - População\n");
     printf("2 - Área\n");
     printf("3 - PIB\n");
     printf("4 - Pontos Turísticos\n");
     printf("5 - Densidade Demográfica (menor vence)\n");
     printf("6 - PIB per Capita\n");
     printf("7 - Super Poder\n");
     printf("Escolha sua opção (1 a 7): ");
     scanf("%d", &opcao);
 
     printf("\n🔍 Comparação escolhida:\n");
 
     switch (opcao)
     {
         case 1:
             printf("Atributo: População\n");
             printf("%s: %lu habitantes\n", nomeA1, populacaoA1);
             printf("%s: %lu habitantes\n", nomeB4, populacaoB4);
             if (populacaoA1 > populacaoB4)
                 printf("Resultado: %s venceu!\n", nomeA1);
             else if (populacaoB4 > populacaoA1)
                 printf("Resultado: %s venceu!\n", nomeB4);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 2:
             printf("Atributo: Área\n");
             printf("%s: %.2f km²\n", nomeA1, areaA1);
             printf("%s: %.2f km²\n", nomeB4, areaB4);
             if (areaA1 > areaB4)
                 printf("Resultado: %s venceu!\n", nomeA1);
             else if (areaB4 > areaA1)
                 printf("Resultado: %s venceu!\n", nomeB4);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 3:
             printf("Atributo: PIB\n");
             printf("%s: %.2f bilhões\n", nomeA1, pibA1);
             printf("%s: %.2f bilhões\n", nomeB4, pibB4);
             if (pibA1 > pibB4)
                 printf("Resultado: %s venceu!\n", nomeA1);
             else if (pibB4 > pibA1)
                 printf("Resultado: %s venceu!\n", nomeB4);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 4:
             printf("Atributo: Pontos Turísticos\n");
             printf("%s: %d pontos turísticos\n", nomeA1, numPontosTuristicosA1);
             printf("%s: %d pontos turísticos\n", nomeB4, numPontosTuristicosB4);
             if (numPontosTuristicosA1 > numPontosTuristicosB4)
                 printf("Resultado: %s venceu!\n", nomeA1);
             else if (numPontosTuristicosB4 > numPontosTuristicosA1)
                 printf("Resultado: %s venceu!\n", nomeB4);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 5:
             printf("Atributo: Densidade Demográfica\n");
             printf("%s: %.2f hab/km²\n", nomeA1, densidadePopulacionalA1);
             printf("%s: %.2f hab/km²\n", nomeB4, densidadePopulacionalB4);
             if (densidadePopulacionalA1 < densidadePopulacionalB4)
                 printf("Resultado: %s venceu!\n", nomeA1);
             else if (densidadePopulacionalB4 < densidadePopulacionalA1)
                 printf("Resultado: %s venceu!\n", nomeB4);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 6:
             printf("Atributo: PIB per Capita\n");
             printf("%s: R$ %.2f\n", nomeA1, pibPerCapitaA1);
             printf("%s: R$ %.2f\n", nomeB4, pibPerCapitaB4);
             if (pibPerCapitaA1 > pibPerCapitaB4)
                 printf("Resultado: %s venceu!\n", nomeA1);
             else if (pibPerCapitaB4 > pibPerCapitaA1)
                 printf("Resultado: %s venceu!\n", nomeB4);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 7:
             printf("Atributo: Super Poder\n");
             printf("%s: %.6f\n", nomeA1, superPoderA1);
             printf("%s: %.6f\n", nomeB4, superPoderB4);
             if (superPoderA1 > superPoderB4)
                 printf("Resultado: %s venceu!\n", nomeA1);
             else if (superPoderB4 > superPoderA1)
                 printf("Resultado: %s venceu!\n", nomeB4);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         default:
             printf("Opção inválida. Por favor, escolha um número de 1 a 7.\n");
     }

    return 0;
}
