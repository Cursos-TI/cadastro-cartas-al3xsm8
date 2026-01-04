#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigo_estado[3], cidade[15];
    int populacao, pontos_turisticos;
    float area, pib;

    // Área para entrada de dados
    printf("CADASTRO CARTA\n");
    printf("Estado da carta: ");
    scanf(" %c", &estado);

    printf("Codigo da carta: ");
    scanf("%s", &codigo_estado);

    printf("Nome da cidade: ");
    scanf("%s", &cidade);

    printf("Numero de habitantes: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("Pib: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    system("clear");
    printf("\n");
   
    // Área para exibição dos dados da cidade
    printf("-------------CARTA 01-------------\n");
    printf("- Estado: %c\n", estado);
    printf("- Codigo do estado: %s\n", codigo_estado);
    printf("- Cidade: %s\n", cidade);
    printf("- Populacao: %d\n");
    printf("- Area: %f\n", area);
    printf("- PIB: %f\n", pib);
    printf("- Numero de pontos turisticos: %d\n", pontos_turisticos);
    printf("----------------------------------\n\n");

    
return 0;
} 
