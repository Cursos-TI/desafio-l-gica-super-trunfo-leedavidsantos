#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
     // Dados da Carta 1
    char estado1[] = "SP";
    char codigo1[] = "C001";
    char cidade1[] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 2200000.0;
    int pontosTuristicos1 = 15;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Dados da Carta 2
    char estado2[] = "RJ";
    char codigo2[] = "C002";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6718903;
    float area2 = 1182.30;
    float pib2 = 1150000.0;
    int pontosTuristicos2 = 12;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição das informações
    printf("Comparação de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pibPerCapita2);

    // Comparação do PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas têm o mesmo PIB per capita.\n");
    }

    return 0;
}
