#include <stdio.h>

int main() {
    // Declaração das variáveis da primeira carta
    char estado1[10];
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    float areaKm2_1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da segunda carta
    char estado2[10];
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float areaKm2_2;
    float pib2;
    int pontosTuristicos2;

    // === Entrada dos dados da primeira carta ===
    printf("=== Dados da primeira carta ===\n");

    printf("Nome do Estado:");
    scanf("%s", estado1);

    printf("Código da carta:");
    scanf("%s", codigo1);

    printf("Nome da cidade:");
    scanf("%s", nomeCidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área em km²:");
    scanf("%f", &areaKm2_1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontosTuristicos1);

    // === Entrada dos dados da segunda carta ===
    printf("\n=== Dados da segunda carta ===\n");

    printf("Nome do Estado:");
    scanf(" %s", estado2);

    printf("Código da carta:");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf("%s", nomeCidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área em km²:");
    scanf("%f", &areaKm2_2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontosTuristicos2);

    // === Exibindo os dados das cartas ===
    printf("\n===== Carta 1 =====\n");
    printf("Código:%s | Cidade:%s | Estado:%s\n", codigo1, nomeCidade1, estado1);
    printf("População:%d | Área:%.2f km² | PIB:%.2f bi | Pontos turísticos:%d\n\n",
           populacao1, areaKm2_1, pib1, pontosTuristicos1);

    printf("===== Carta 2 =====\n");
    printf("Código:%s | Cidade:%s | Estado:%s\n", codigo2, nomeCidade2, estado2);
    printf("População:%d | Área:%.2f km² | PIB:%.2f bi | Pontos turísticos:%d\n",
           populacao2, areaKm2_2, pib2, pontosTuristicos2);

    return 0;
}
