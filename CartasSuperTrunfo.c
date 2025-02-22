#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartasenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Este código inicial serve como base para o des
// Teste larissa

int main()
{
  // Declarando variáveis dos dados das cartas.
    char state1, state2;          // Estado da cidade (letra de 'A' a 'H').
    char code1[4], code2[4];      // Código da carta (ex: A01, B03).
    char name1[50], name2[50];    // Nome da cidade.
    int population1, population2; // População da cidade.
    float area1, area2;           // Área da cidade em km².
    float pib1, pib2;             // PIB da cidade em bilhões de reais.
    int tourist_pt1, tourist_pt2; // Número de pontos turísticos.

    // Primeira Carta.
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &state1);
    state1 = toupper(state1); // Garante que o estado seja maiúsculo.

    // Validação do estado.
    if (state1 < 'A' || state1 > 'H') {
        printf("Estado inválido! Deve ser uma letra de A a H.\n");
        return 1; // Encerra o programa com erro.
    }

    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%3s", code1); // Lê até 3 caracteres (tamanho do código).

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", name1); // Lê o nome da cidade com espaços.

    printf("Digite a população da cidade: ");
    scanf("%d", &population1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &tourist_pt1);

    // Exibindo os dados da primeira carta.

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
