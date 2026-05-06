#include <stdio.h>
 
int main() {
    float nota1, nota2, nota3, media;

    printf("Entre com a nota 1: ");
    scanf("%f", &nota1);

    printf("Entre com a nota 2: ");
    scanf("%f", &nota2);

    printf("Entre com a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;


    printf("A Média das notas é: %.2f\n", media);
}