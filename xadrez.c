#include <stdio.h>

int main() {
    // === Variáveis da primeira carta ===
    char estado1[10], codigo1[10], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float areaKm2_1, pib1;
    float densidade1, pibPerCapita1;

    // === Variáveis da segunda carta ===
    char estado2[10], codigo2[10], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float areaKm2_2, pib2;
    float densidade2, pibPerCapita2;

    // === Entrada da primeira carta ===
    printf("=== Dados da primeira carta ===\n");

    printf("Nome do Estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &areaKm2_1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / areaKm2_1;
    pibPerCapita1 = pib1 / populacao1;

    // === Entrada da segunda carta ===
    printf("\n=== Dados da segunda carta ===\n");

    printf("Nome do Estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &areaKm2_2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / areaKm2_2;
    pibPerCapita2 = pib2 / populacao2;

    // === Exibição dos dados ===
    printf("\n===== Carta 1 =====\n");
    printf("Código: %s | Cidade: %s | Estado: %s\n", codigo1, nomeCidade1, estado1);
    printf("População: %d | Área: %.2f km² | PIB: %.2f | Pontos turísticos: %d\n", populacao1, areaKm2_1, pib1, pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n===== Carta 2 =====\n");
    printf("Código: %s | Cidade: %s | Estado: %s\n", codigo2, nomeCidade2, estado2);
    printf("População: %d | Área: %.2f km² | PIB: %.2f | Pontos turísticos: %d\n", populacao2, areaKm2_2, pib2, pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    return 0;
}