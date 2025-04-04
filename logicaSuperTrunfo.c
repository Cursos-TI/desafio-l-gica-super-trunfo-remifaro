#include <stdio.h>

int main()
{
    // Variáveis originais
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

    printf("\n🎴 Bem-vindo ao Super Trunfo dos Países!\n");

    // Cadastro das cartas
    printf("\n🔹 Carta A1\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nomeA1);
    printf("População: ");
    scanf("%lu", &populacaoA1);
    printf("Área (em km²): ");
    scanf("%f", &areaA1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pibA1);
    printf("Pontos turísticos: ");
    scanf("%d", &numPontosTuristicosA1);

    printf("\n🔹 Carta B4\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nomeB4);
    printf("População: ");
    scanf("%lu", &populacaoB4);
    printf("Área (em km²): ");
    scanf("%f", &areaB4);
    printf("PIB (em bilhões): ");
    scanf("%f", &pibB4);
    printf("Pontos turísticos: ");
    scanf("%d", &numPontosTuristicosB4);

    // Cálculos
    float densidadeA1 = populacaoA1 / areaA1;
    float densidadeB4 = populacaoB4 / areaB4;
    float pibPerCapitaA1 = (pibA1 * 1e9) / populacaoA1;
    float pibPerCapitaB4 = (pibB4 * 1e9) / populacaoB4;

    // Escolha dos dois atributos
    int attr1, attr2;

    printf("\n🔍 Escolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica (menor vence)\n6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &attr1);

    // Loop para escolha do segundo atributo
    while (1) {
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 6; i++) {
            if (i != attr1) {
                switch (i) {
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Pontos Turísticos\n"); break;
                    case 5: printf("5 - Densidade Demográfica\n"); break;
                    case 6: printf("6 - PIB per Capita\n"); break;
                }
            }
        }

        printf("Opção: ");
        scanf("%d", &attr2);

        if (attr2 != attr1 && attr2 >= 1 && attr2 <= 6)
            break;
        else
            printf("⚠️ A opção deve ser diferente da primeira e válida. Tente novamente.\n");
    }

    // Função para comparar um atributo e retornar o valor
    float getValor(int opcao, int isA1) {
        switch (opcao) {
            case 1: return isA1 ? populacaoA1 : populacaoB4;
            case 2: return isA1 ? areaA1 : areaB4;
            case 3: return isA1 ? pibA1 : pibB4;
            case 4: return isA1 ? numPontosTuristicosA1 : numPontosTuristicosB4;
            case 5: return isA1 ? densidadeA1 : densidadeB4;
            case 6: return isA1 ? pibPerCapitaA1 : pibPerCapitaB4;
            default: return 0;
        }
    }

    // Pegando os valores de cada atributo
    float valorA1_1 = getValor(attr1, 1);
    float valorB4_1 = getValor(attr1, 0);
    float valorA1_2 = getValor(attr2, 1);
    float valorB4_2 = getValor(attr2, 0);

    // Mostrar valores dos atributos escolhidos
    printf("\n🔎 Comparação dos atributos:\n");

    printf("\n➡️ Primeiro atributo (%d):\n", attr1);
    printf("%s: %.2f\n", nomeA1, valorA1_1);
    printf("%s: %.2f\n", nomeB4, valorB4_1);

    printf("\n➡️ Segundo atributo (%d):\n", attr2);
    printf("%s: %.2f\n", nomeA1, valorA1_2);
    printf("%s: %.2f\n", nomeB4, valorB4_2);

    // Comparações individuais
    int pontosA1 = 0, pontosB4 = 0;

    if (attr1 == 5) {
        if (valorA1_1 < valorB4_1) pontosA1++;
        else if (valorB4_1 < valorA1_1) pontosB4++;
    } else {
        if (valorA1_1 > valorB4_1) pontosA1++;
        else if (valorB4_1 > valorA1_1) pontosB4++;
    }

    if (attr2 == 5) {
        if (valorA1_2 < valorB4_2) pontosA1++;
        else if (valorB4_2 < valorA1_2) pontosB4++;
    } else {
        if (valorA1_2 > valorB4_2) pontosA1++;
        else if (valorB4_2 > valorA1_2) pontosB4++;
    }

    // Soma final
    float somaA1 = valorA1_1 + valorA1_2;
    float somaB4 = valorB4_1 + valorB4_2;

    printf("\n📊 Soma dos atributos:\n");
    printf("%s: %.2f\n", nomeA1, somaA1);
    printf("%s: %.2f\n", nomeB4, somaB4);

    printf("\n🏆 Resultado final:\n");
    if (somaA1 > somaB4)
        printf("%s venceu a rodada!\n", nomeA1);
    else if (somaB4 > somaA1)
        printf("%s venceu a rodada!\n", nomeB4);
    else
        printf("Empate!\n");

    return 0;
}
