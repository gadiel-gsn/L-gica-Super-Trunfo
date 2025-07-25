#include <stdio.h>
#include <string.h>

char pais1[30], pais2[30];
int populacao1, populacao2, nDePontosTuristicos1, nDePontosTuristicos2, scolhaJogador;
float area1, area2, pib1, pib2, DensiPopulacional1, DensiPopulacional2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;

float obterValor(int atributo, int carta)
{
    switch (atributo)
    {
    case 1:
        return carta == 1 ? populacao1 : populacao2;
    case 2:
        return carta == 1 ? area1 : area2;
    case 3:
        return carta == 1 ? pib1 : pib2;
    case 4:
        return carta == 1 ? nDePontosTuristicos1 : nDePontosTuristicos2;
    case 5:
        return carta == 1 ? DensiPopulacional1 : DensiPopulacional2;
    case 6:
        return carta == 1 ? pibPerCapita1 : pibPerCapita2;
    case 7:
        return carta == 1 ? superPoder1 : superPoder2;
    default:
        return 0;
    }
}

int main()
{
    // Entrada de dados para a primeira carta
    printf("Digite o nome do país da primeira carta: ");
    fgets(pais1, sizeof(pais1), stdin);
    pais1[strcspn(pais1, "\n")] = '\0';

    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);
    pib1 *= 1000000000;
    getchar();

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &nDePontosTuristicos1);
    getchar();

    // Entrada de dados para a segunda carta
    printf("Digite o nome do país da segunda carta: ");
    fgets(pais2, sizeof(pais2), stdin);
    pais2[strcspn(pais2, "\n")] = '\0';

    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);
    pib2 *= 1000000000;
    getchar();

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &nDePontosTuristicos2);
    getchar();

    // Cálculos da primeira carta
    DensiPopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + nDePontosTuristicos1 + area1 + pibPerCapita1 + pib1 + (1.0 / DensiPopulacional1);

    // Calculos da segunda carta
    DensiPopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + nDePontosTuristicos2 + area2 + pibPerCapita2 + pib2 + (1.0 / DensiPopulacional2);

    // Exibição dos dados das cartas
    printf("\nDados da primeira carta:\n");
    printf("Estado: %s\n", pais1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1 / 1000000000);
    printf("Números de pontos turísticos: %d\n", nDePontosTuristicos1);
    printf("Densidade populacional da primeira carta: %.2f hab/km²\n", DensiPopulacional1);
    printf("PIB per capita da primeira carta: %.2f\n", pibPerCapita1);
    printf("Super Poder da primeira carta: %.2f\n", superPoder1);
    printf("\nDados da segunda carta:\n");
    printf("Estado: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2 / 1000000000);
    printf("Números de pontos turísticos: %d\n", nDePontosTuristicos2);
    printf("Densidade populacional da segunda carta: %.2f hab/km²\n", DensiPopulacional2);
    printf("PIB per capita da segunda carta: %.2f\n", pibPerCapita2);
    printf("Super Poder da segunda carta: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\nComparando as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("\nEscolha uma opção para comparar as cartas (1-7): ");
    scanf("%d", &scolhaJogador);

    switch (scolhaJogador)
    {
    case 1:
        if (populacao1 > populacao2)
            printf("%s vence na população.\n", pais1);
        else if (populacao2 > populacao1)
            printf("%s vence na população.\n", pais2);
        else
            printf("Empate na população.\n");
        break;
    case 2:
        if (area1 > area2)
            printf("%s vence na área.\n", pais1);
        else if (area2 > area1)
            printf("%s vence na área.\n", pais2);
        else
            printf("Empate na área.\n");
        break;
    case 3:
        if (pib1 > pib2)
            printf("%s vence no PIB.\n", pais1);
        else if (pib2 > pib1)
            printf("%s vence no PIB.\n", pais2);
        else
            printf("Empate no PIB.\n");
        break;
    case 4:
        if (nDePontosTuristicos1 > nDePontosTuristicos2)
            printf("%s vence no número de pontos turísticos.\n", pais1);
        else if (nDePontosTuristicos2 > nDePontosTuristicos1)
            printf("%s vence no número de pontos turísticos.\n", pais2);
        else
            printf("Empate no número de pontos turísticos.\n");
        break;
    case 5:
        if (DensiPopulacional1 > DensiPopulacional2)
            printf("%s vence na densidade populacional.\n", pais1);
        else if (DensiPopulacional2 > DensiPopulacional1)
            printf("%s vence na densidade populacional.\n", pais2);
        else
            printf("Empate na densidade populacional.\n");
        break;
    case 6:
        if (pibPerCapita1 > pibPerCapita2)
            printf("%s vence no PIB per capita.\n", pais1);
        else if (pibPerCapita2 > pibPerCapita1)
            printf("%s vence no PIB per capita.\n", pais2);
        else
            printf("Empate no PIB per capita.\n");
        break;
    case 7:
        if (superPoder1 > superPoder2)
            printf("%s vence no Super Poder.\n", pais1);
        else if (superPoder2 > superPoder1)
            printf("%s vence no Super Poder.\n", pais2);
        else
            printf("Empate no Super Poder.\n");
        break;
    default:
        printf("Opção inválida. Por favor, escolha um número entre 1 e 7.\n");
        break;
    }

    printf("Escolha dois atributos para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite o número do primeiro atributo: ");
    int atributo1, atributo2;
    scanf("%d", &atributo1);
    printf("Digite o número do segundo atributo: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo atributo para comparar. Por favor, escolha atributos diferentes.\n");
        return 1;
    }

    if (atributo1 < 1 || atributo1 > 7 || atributo2 < 1 || atributo2 > 7)
    {
        printf("Atributos inválidos. Por favor, escolha números entre 1 e 7.\n");
        return 1;
    }
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // Atribui os valores dos atributos escolhidos
    valor1_carta1 = obterValor(atributo1, 1);
    valor1_carta2 = obterValor(atributo1, 2);
    valor2_carta1 = obterValor(atributo2, 1);
    valor2_carta2 = obterValor(atributo2, 2);

    // Comparação individual dos atributos
    printf("\nResultado da comparação individual:\n");

    // Atributo 1
    printf("Atributo %d:\n", atributo1);
    printf("%s: %.2f\n", pais1, valor1_carta1);
    printf("%s: %.2f\n", pais2, valor1_carta2);
    if (atributo1 == 5)
    {
        if (valor1_carta1 < valor1_carta2)
            printf("%s vence na densidade populacional (menor é melhor).\n", pais1);
        else if (valor1_carta2 < valor1_carta1)
            printf("%s vence na densidade populacional (menor é melhor).\n", pais2);
        else
            printf("Empate na densidade populacional.\n");
    }
    else
    {
        if (valor1_carta1 > valor1_carta2)
            printf("%s vence no atributo %d.\n", pais1, atributo1);
        else if (valor1_carta2 > valor1_carta1)
            printf("%s vence no atributo %d.\n", pais2, atributo1);
        else
            printf("Empate no atributo %d.\n", atributo1);
    }

    // Atributo 2
    printf("\nAtributo %d:\n", atributo2);
    printf("%s: %.2f\n", pais1, valor2_carta1);
    printf("%s: %.2f\n", pais2, valor2_carta2);
    if (atributo2 == 5)
    {
        if (valor2_carta1 < valor2_carta2)
            printf("%s vence na densidade populacional (menor é melhor).\n", pais1);
        else if (valor2_carta2 < valor2_carta1)
            printf("%s vence na densidade populacional (menor é melhor).\n", pais2);
        else
            printf("Empate na densidade populacional.\n");
    }
    else
    {
        if (valor2_carta1 > valor2_carta2)
            printf("%s vence no atributo %d.\n", pais1, atributo2);
        else if (valor2_carta2 > valor2_carta1)
            printf("%s vence no atributo %d.\n", pais2, atributo2);
        else
            printf("Empate no atributo %d.\n", atributo2);
    }

    // Soma dos dois atributos
    float somaCarta1 = valor1_carta1 + valor2_carta1;
    float somaCarta2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos dois atributos:\n");
    printf("%s: %.2f\n", pais1, somaCarta1);
    printf("%s: %.2f\n", pais2, somaCarta2);

    if (somaCarta1 > somaCarta2)
        printf("\n%s vence no total dos atributos escolhidos!\n", pais1);
    else if (somaCarta2 > somaCarta1)
        printf("\n%s vence no total dos atributos escolhidos!\n", pais2);
    else
        printf("\nEmpate no total dos atributos!\n");

    return 0;
}