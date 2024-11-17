#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado = 'A';
    int cidade = 01, populacao = 0, turismo = 0;
    double area = 0, pib = 0;

    printf("Digite um estado:\n");
    scanf(" %c", &estado);
    printf("Digite uma cidade:\n");
    scanf("%d", &cidade);
    printf("Digite sua população:\n");
    scanf("%d", &populacao);
    printf("Digite sua área:\n");
    scanf("%lf", &area);
    printf("Digite seu PIB:\n");
    scanf("%lf", &pib);
    printf("Digite sua quantidade de pontos turísticos:\n");
    scanf("%d", &turismo);

    printf("Estado: %c\n", estado);
    printf("Cidade: %.2i\n", cidade);
    printf("População: %d\n", populacao);
    printf("PIB: %.2lf\n", pib);
    printf("Área: %.2lf\n", area);
    printf("Quantidade de Pontos Turísticos: %d\n", turismo);
    return 0;
}
