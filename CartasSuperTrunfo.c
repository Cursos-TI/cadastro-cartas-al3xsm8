#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char state, state_2;
    char code[4], code_2[4];
    char city[20], city_2[20];
    unsigned long int population, population_2;
    float area, area_2;
    double pib, pib_2;
    int tourist_points, tourist_points_2;
    float density, density_2;
    double pib_per, pib_per_2;
    float super_power;


    // Área para entrada de dados carta 1
    printf("\nCadastro carta 1: \n");
    printf("Estado da carta: \n");
    scanf(" %c", &state);

    printf("Codigo da carta: \n");
    scanf("%s", &code);

    printf("Cidade: \n");
    scanf("%s", &city);

    printf("Populacao: \n");
    scanf("%d", &population);

    printf("Area: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%lf", &pib);

    printf("Pontos Turisticos: \n");
    scanf("%d", &tourist_points);


    density = population / area;
    pib_per = (pib * 1000000000) / population;

    // Área para entrada de dados carta 2
    printf("\nCadastro carta 2: \n");
    printf("Estado da carta: \n");
    scanf(" %c", &state_2);

    printf("Codigo da carta: \n");
    scanf("%s", &code_2);

    printf("Cidade: \n");
    scanf("%s", &city_2);

    printf("Populacao: \n");
    scanf("%d", &population_2);

    printf("Area: \n");
    scanf("%f", &area_2);

    printf("Pib: \n");
    scanf("%lf", &pib_2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &tourist_points_2);


    density_2 = population_2 / area_2;
    pib_per_2 = (pib_2 * 1000000000) / population_2;

    //Comando para limpar terminal apos input
    system("clear"); //(cls) == windows, (clear) == linux
    printf("\n");
   
    //Comparacao de cartas calculos
    super_power = ((float)population + area + pib + (float)tourist_points + pib_per + (1 / density)) 
                    > ((float)population_2 + area_2 + pib_2 + (float)tourist_points_2 + pib_per_2 + (1 / density_2));

    // Área para exibição dos dados da cidade carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", state);
    printf("Codigo: %s\n", code);
    printf("Nome da Cidade: %s\n", city);
    printf("Populacao: %d\n", population);
    printf("Area: %.2f km2\n", area);
    printf("PIB %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", tourist_points);
    printf("Densidade Populacional: %.2f hab/km2\n", density);
    printf("PIB per Capita: %.2f reais\n\n", pib_per);

    // Área para exibição dos dados da cidade carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", state_2);
    printf("Codigo: %s\n", code_2);
    printf("Nome da Cidade: %s\n", city_2);
    printf("Populacao: %d\n", population_2);
    printf("Area: %.2f km2\n", area_2);
    printf("PIB %.2f bilhoes de reais\n", pib_2);
    printf("Numero de Pontos Turisticos: %d\n", tourist_points_2);
    printf("Densidade Populacional: %.2f hab/km2\n", density_2);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_2);

    // Área para exibição da comparação de cartas
    printf("Comparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", population > population_2, population > population_2);
    printf("Area: Carta %d venceu (%d)\n", area > area_2, area > area_2);
    printf("PIB: Carta %d venceu (%d)\n", pib > pib_2, pib > pib_2);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", tourist_points > tourist_points_2, tourist_points > tourist_points_2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", density < density_2, density < density_2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per > pib_per_2, pib_per > pib_per_2);
    printf("Super Poder: Carta %d venceu (%d)\n", super_power, super_power);
    
    return 0;
} 