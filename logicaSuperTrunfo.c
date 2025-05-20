#include <stdio.h>

int main() {

    int carta1 = 50, carta2 = 55;
    int populacao1 = 10000000, populacao2 = 20000000;
    float area1 = 1000.000, area2 = 2000.000;
    float pib1 = 500.000, pib2 = 600.000;
    int pontos_turisticos1 = 50, pontos_turisticos2 = 55;
    
    printf("Digite o valor da carta1: ");
    scanf("%d", &carta1);
    
    printf("Digite o valor da carta2: ");
    scanf("%d", &carta2);

    if( carta1 > carta2) {
        printf("Carta1 venceu!.\n");
    } else {
        printf("Carta2 venceu!\n");
    }
    
    printf("Digite o valor da populacao1: ");
    scanf("%d", &populacao1);
    
    printf("Digite o valor da populacao2: ");
    scanf("%d", &populacao2);

    if( populacao1 > populacao2) {
        printf("Populacao1 venceu!.\n");
    } else {
        printf("Populacao2 venceu!\n");
    }

    printf("Digite o valor da area1: ");
    scanf("%f", &area1);
    
    printf("Digite o valor da area2: ");
    scanf("%f", &area2);

    if( area1 > area2) {
        printf("Area1 venceu!.\n");
    } else {
        printf("Area2 venceu!\n");
    }

    printf("Digite o valor da pib1: ");
    scanf("%f", &pib1);
    
    printf("Digite o valor da pib2: ");
    scanf("%f", &pib2);

    if( pib1 > pib2) {
        printf("pib1 venceu!.\n");
    } else {
        printf("pib2 venceu!\n");
    }

    printf("Digite o valor da pontos_turisticos1: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("Digite o valor da Pontos_turisticos2: ");
    scanf("%d", &pontos_turisticos2);

    if( pontos_turisticos1 > pontos_turisticos2) {
        printf("pontos_turisticos1 venceu!.\n");
    } else {
        printf("pontos_turisticos2 venceu!\n");
    }

    printf("A carta vencedora é: %s\n", carta2);

        return 0;
}
