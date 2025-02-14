#include <stdio.h>

int main() {
    unsigned long int populacao1, populacao2; 
    int pontos1, pontos2;
    float area1, area2, densidade1, densidade2; 
    float pib1, pib2, percapita1, percapita2;
    float superpoder1, superpoder2, resultado1, resultado2;
    char estado1, estado2, cidade1, cidade2, cod1, cod2;


    printf("bem - vindos ao super trunfo\n");

    printf("Digite o estado da carta 1\n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta 1\n");
    scanf("%s", &cod1);

    printf("Digite a cidade da carta 1\n");
    scanf("%s", &cidade1);

    printf("digite a populaçao da carta 1\n");
    scanf("%lu", &populacao1); 

    printf("Digite quantidade de pontos turisticos da carta 1\n");
    scanf("%d", &pontos1); 

    printf("Digite a area km² da carta 1\n");
    scanf("%f", &area1); 

    printf("Digite o pib da carta 1\n");
    scanf("%f", &pib1);

     
    printf("Resultados da Carta 1\n");

    printf("Populacao: %lu - Pontos Turisticos: %d \n", populacao1, pontos1);
    printf("Area por km²: %f - PIB: %f \n", area1, pib1);

     
    densidade1 = (populacao1 / area1);

    percapita1 = (pib1 / populacao1);

     
    printf("Densidade Populacional: %f \n", densidade1);

    printf("PIB per capita: %f \n",percapita1);

    superpoder1 = (populacao1 + pontos1 + densidade1 + pib1 + area1 + percapita1);




    printf("Digite o estado da carta 2\n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta 2\n");
    scanf("%s", &cod2);

    printf("Digite a cidade da carta 2\n");
    scanf("%s", &cidade2);

    printf("gite a populaçao da carta 2\n");
    scanf("%lu", &populacao2); 

    printf("Digite quantidade de pontos turisticos da carta 2\n");
    scanf("%d", &pontos2); 

    printf("Digite a area km² da carta 2\n");
    scanf("%f", &area2); 

    printf("Digite o pib da carta 2\n");
    scanf("%f", &pib2);

     
    printf("Resultados da carta 2");
    
    printf("Populacao: %lu - Pontos Turisticos: %d \n", populacao2, pontos2);
    printf("Area por km²: %f - PIB: %f \n", area2, pib2);

    
    densidade2 = (populacao2 / area2);

    percapita2 = (pib2 / populacao2);


    printf("Densidade Populacional: %f \n", densidade2);

    printf("PIB per capita: %f \n",percapita2);

    superpoder2 = (populacao2 + pontos2 + densidade2 + pib2 + area2 + percapita2);

    resultado1 = (superpoder1 > superpoder2);
    printf("Resultado do combate: %f\n", resultado1);

    resultado2 = (densidade1 < densidade2);
    printf(" Resultado segundo combate: %f\n", resultado2);


   
    return 0;
}
