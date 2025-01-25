#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao; //declaração de variáveis//
    int pontos;
    float area;
    float pib;


    pritf("Bem-vindos ao super trunfos\n");// printf para exibir na tela, a sintaxe do printf (''texto com formatação''', variavel1, variavel2, ...); //


    print("Digite a populaçao\n");
    scanf("%d", &populacao); // scanf para recolher informações do usuario, a sintaxe do scanf (''formato'', &variavel); //

    prinf("Digite quantidade de pontos turisticos\n");
    scanf("%d", &pontos); // %d: Imprime um inteiro no formato decimal.//

    printf("Digite a area km²\n");
    scanf("%f", &area); //%f: Imprime um número de ponto flutuante no formato padrão.//

    printf("Digite o pib\n");
    scanf("%f", &pib);

     //Exibindo os resultados//
    printf("  Populacao: %d - Pontos Turisticos: %d \n", populacao, pontos);
    printf("Area por km²: %f - PIB: %f \n", area, pib);

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
