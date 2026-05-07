#include <stdio.h>

int main() {
    //Declaração de variáveis
    char produtoA[30] = "Produto A", produtoB[30] = "Produto B";
    
    unsigned int estoqueA = 1000, estoqueB = 2000, estoqueMinA = 500, estoqueMinB = 2500;

    float valorA = 10.50, valorB = 20.40;

    double valortotalA, valortotalB;

    int resultadoA, resultadoB;

    //Exibir as informações dos produtos
    printf("O Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("O Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    //Compração dos Valores Mínimos de Estoque
    resultadoA = estoqueA > estoqueMinA;
    resultadoB = estoqueB > estoqueMinB;

    printf("O Produto %s tem estoque Mínimo %d\n", produtoA, resultadoA);
    printf("O Produto %s tem estoque Mínimo %d\n", produtoB, resultadoB);

    //Compração dos valores
    printf("Valor total de A (R$ %.2f) é maior que valor total de B (R$ %.2f)? %d\n", (estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));
    printf("Valor total de A (R$ %.2f) é menor que valor total de B (R$ %.2f)? %d\n", (estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) < (estoqueB * valorB));


}