#include <stdio.h>


int main() {
    int populacao; //declaração de variáveis//
    int pontos;
    float area, densidade;
    float pib, percapita;


    printf("Bem-vindos ao super trunfos\n");// printf para exibir na tela, a sintaxe do printf (''texto com formatação''', variavel1, variavel2, ...); //


    printf("Digite a populaçao\n");
    scanf("%d", &populacao); // scanf para recolher informações do usuario, a sintaxe do scanf (''formato'', &variavel); //

    printf("Digite quantidade de pontos turisticos\n");
    scanf("%d", &pontos); // %d: Imprime um inteiro no formato decimal.//

    printf("Digite a area km²\n");
    scanf("%f", &area); //%f: Imprime um número de ponto flutuante no formato padrão.//

    printf("Digite o pib\n");
    scanf("%f", &pib);

     //Exibindo os resultados//
    printf("  Populacao: %d - Pontos Turisticos: %d \n", populacao, pontos);
    printf("Area por km²: %f - PIB: %f \n", area, pib);

    densidade = (populacao / area);

    percapita = (pib / populacao);


printf(" Densidade Populacional: %f \n", densidade);
printf(" PIB per capita: %f \n", percapita);

    return 0;
}
