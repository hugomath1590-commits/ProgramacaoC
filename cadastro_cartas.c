#include <stdio.h>
int main(){
//Carta 0
    char estado[2] = "A", codigo[4] = "A01", cidade[30] = "Uberlândia";
    int popula = 761835, pontos = 30;
    double pib = 51060000000, area = 4115.206, densidade, pibpc;
  //Carta 1
    char estado1[2] = "A", codigo1[4] = "A02", cidade1[30] = "Araguari";
    int popula1 = 123432, pontos1 = 20;
    double area1 = 2729.777, pib1 = 6900000000, densidade1, pibpc1;

//Calculando PIB per capta e Densidade Populacional
    densidade = (float) popula / area;
    pibpc = (float) pib / popula;

    densidade1 = (float) popula1 / area1;
    pibpc1 = (float) pib1 / popula1;

// Carta0
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", popula);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$%.3f \n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade);
    printf("PIB per Capta: R$%.2f\n\n", pibpc);

//Carta1
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", popula1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$%.3f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capta: R$%.2f\n\n", pibpc1);
    
    if (popula > popula1){
        printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    }

    return 0;

}