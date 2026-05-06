/*#include <stdio.h>
    int main(){
        //declaração das variáveis

        int numero1, numero2;
        int soma, subtracao,multiplicacao, divisao;

        // Entrada dos números

        printf("Digite o primeiro número: ");
        scanf("%d", &numero1);
        printf("Digite o segundo número: ");
        scanf("%d", &numero2);

        // definição das operações

        soma = numero1 + numero2;

        subtracao = numero1 - numero2;

        multiplicacao = numero1 * numero2;

        divisao = numero1 / numero2;

// resultado das operações

        printf("A soma é: %d\n", soma);

        printf("A subtração é: %d\n", subtracao);
        
        printf("A multiplicação é: %d\n", multiplicacao);

        printf("A divisão é: %d\n", divisao);


    }
*/
/*
#include <stdio.h>
    int main(){

        /*
        Atribuição simples (=)
        Atribuição com soma (+=)
        Atribuição com subtração (-=)
        Atribuição com multiplicação (*=)
        Atribuição com Divisão (/=)
        */
      /*int numero1 = 10, numero2, resultado;

       resultado = 10;

       printf("Resultado: %d\n", resultado);

       resultado += 20;
       printf("Resultado: %d\n", resultado);

       resultado -= numero1;
       printf("Resultado: %d\n", resultado);

       resultado *= 5;
       printf("Resultado: %d\n", resultado);

       resultado /= 2;
       printf("Resultado: %d\n", resultado);


    }
    */

#include<stdio.h>
    int main(){
        /*
        Incremento (++)
        Pré-incremento (++a)
        Pós-incremento (a++)
        Decremento (--)
        Pré-drecremento (--a)
        Pós-decremento (a--)
        */
       
        int numero1 = 1, resultado;
            printf("Antes incremento: %d\n", numero1); 
            resultado = numero1++;
            printf("Após pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); 

             resultado = ++numero1;
            printf("Após pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); 

            resultado = numero1--;
            printf("Após pós-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); 

            resultado = --numero1;
            printf("Após pré-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado); 

        //numero1--;
           // printf("Após decremento: %d\n", numero1); 

        

    }