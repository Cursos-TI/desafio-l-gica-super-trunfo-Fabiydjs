#include <stdio.h>
 
int main() {
    //Declaração das variáveis com valores já definidos
    int populacao1 = 50000;
    int populacao2 = 80000;

    int pontos_turisticos1 = 8;
    int pontos_turisticos2 = 9;

    float area1 = 200.0;
    float area2 = 150.0;

    float PIB1 = 2.5; // PIB em bilhões
    float PIB2 = 1.8; // PIB em bilhões

    char estado1[50] = "A";
    char estado2[50] = "B";

    char codigo1[50] = "A01";
    char codigo2[50] = "B02";

    char nome_cidade1[50] = "Uberlândia";
    char nome_cidade2[50] = "Uberaba";

    float densidade_populacional1, densidade_populacional2, pib_percapita1, pib_percapita2;


    // Calculando Médias
    densidade_populacional1 = (float)populacao1 / area1;
    densidade_populacional2 = (float)populacao2 / area2;

    float PIB1_reais = PIB1 * 1000000000;
    float PIB2_reais = PIB2 * 1000000000;

    pib_percapita1 = PIB1_reais / populacao1;
    pib_percapita2 = PIB2_reais / populacao2;

    // Exibição das populações de cada cidade
    printf("\n=== Resultado ===\n");
    printf("População Carta 1: %d\n", populacao1);
    printf("População Carta 2: %d\n", populacao2);

    // Comparação pela população e resultado da carta vencedora
    if (populacao1 > populacao2) {
        printf("A carta 1 é a vencedora pela população.\n");
    } else if (populacao2 > populacao1) {
        printf("A carta 2 é a vencedora pela população.\n");
    } else {
        printf("Empate! Ambas têm a mesma população.\n");
    }
    
    return 0;
}