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

    // Cálculos da primeira carta
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

    // Cálculos da segunda carta
    densidade2 = populacao2 / areaKm2_2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + areaKm2_2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // === Comparações ===
    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", areaKm2_1 > areaKm2_2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
