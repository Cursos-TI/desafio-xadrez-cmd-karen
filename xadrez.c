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

    // === Menu de comparação ===
    int opcao;
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // === Comparação ===
    printf("\nComparação entre %s e %s:\n", nomeCidade1, nomeCidade2);

    switch (opcao) {
        case 1: // População
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("%s venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("%s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2: // Área
            printf("Área: %.2f km² vs %.2f km²\n", areaKm2_1, areaKm2_2);
            if (areaKm2_1 > areaKm2_2) {
                printf("%s venceu!\n", nomeCidade1);
            } else if (areaKm2_2 > areaKm2_1) {
                printf("%s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3: // PIB
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("%s venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("%s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4: // Pontos turísticos
            printf("Pontos turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("%s venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("%s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5: // Densidade demográfica (menor vence)
            printf("Densidade demográfica: %.2f vs %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("%s venceu! (menor densidade vence)\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("%s venceu! (menor densidade vence)\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
