#include <stdio.h>

int main() {
    // === Variáveis da primeira carta ===
    char estado1[10], codigo1[10], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float areaKm2_1, pib1;
    float densidade1, pibPerCapita1, superPoder1;

    // === Variáveis da segunda carta ===
    char estado2[10], codigo2[10], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float areaKm2_2, pib2;
    float densidade2, pibPerCapita2, superPoder2;

    // === Entrada da primeira carta ===
    printf("=== Dados da primeira carta ===\n");
    printf("Nome do Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &areaKm2_1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidade1 = populacao1 / areaKm2_1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + areaKm2_1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // === Entrada da segunda carta ===
    printf("\n=== Dados da segunda carta ===\n");
    printf("Nome do Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &areaKm2_2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade2 = populacao2 / areaKm2_2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + areaKm2_2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // === Menu para dois atributos ===
    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    printf("\n=== Escolha dois atributos diferentes para comparar ===\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");

    // Primeira escolha
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Segunda escolha
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &atributo2);

    // Validação
    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
        printf("Atributos inválidos ou repetidos.\n");
        return 1;
    }

    // Função de comparação por atributo
    switch (atributo1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            valor1_carta1 = areaKm2_1;
            valor1_carta2 = areaKm2_2;
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            valor1_carta1 = pontosTuristicos1;
            valor1_carta2 = pontosTuristicos2;
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            break;
    }

    switch (atributo2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            valor2_carta1 = areaKm2_1;
            valor2_carta2 = areaKm2_2;
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            valor2_carta1 = pontosTuristicos1;
            valor2_carta2 = pontosTuristicos2;
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            break;
    }

    // Mostrar nomes das cidades
    printf("\nComparando %s e %s:\n", nomeCidade1, nomeCidade2);

    // Mostrar valores dos atributos
    printf("Atributo 1: %.2f vs %.2f\n", valor1_carta1, valor1_carta2);
    printf("Atributo 2: %.2f vs %.2f\n", valor2_carta1, valor2_carta2);

    // Inverter valores de densidade (pois menor vence)
    if (atributo1 == 5) valor1_carta1 = -valor1_carta1, valor1_carta2 = -valor1_carta2;
    if (atributo2 == 5) valor2_carta1 = -valor2_carta1, valor2_carta2 = -valor2_carta2;

    // Soma dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("Soma total: %.2f (de %s) vs %.2f (de %s)\n", soma1, nomeCidade1, soma2, nomeCidade2);

    // Resultado final
    if (soma1 > soma2) {
        printf("Vencedora: %s!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("Vencedora: %s!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
