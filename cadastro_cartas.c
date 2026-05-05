#include <stdio.h>
int main(){

    char estado[2];
    char codigo[4];
    char cidade[30];
    int popula;
    int pontos;
    float area;
    float pib;
    char estado1[2];
    char codigo1[4];
    char cidade1[30];
    int popula1;
    int pontos1;
    float area1;
    float pib1;

    printf("Entre com os dados da primeira carta!\n");

    printf("Estado 1: ");
    scanf("%s", &estado);

    printf("Codigo carta: ");
    scanf("%s", &codigo);

    printf("Cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%i", &popula);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos);

    printf("Área em KM²: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);


//Começo da segunda carta 

    printf("Entre com os dados da segunda carta!\n");

    printf("Estado 2: ");
    scanf("%s", &estado1);

    printf("Codigo carta: ");
    scanf("%s", &codigo1);

    printf("Cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%i", &popula1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    printf("Área em KM²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

//Inicio da impressão das cartas

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %i\n", popula);
    printf("Área: %f Km²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", pontos);
    
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %i\n", popula1);
    printf("Área: %f Km²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    return 0;

}