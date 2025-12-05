//Questão 03 – (10 ptos)
//Faça uma função que receba uma matriz 10x10 como parâmetro de entrada e devolva quantos elementos são menores que a média dos elementos que estão na diagonal
//secundária desta matriz.
//Crie um programa principal para utilizar o método criado.
//Regra de pontuação: cabeçalho do método: 3 pts Corpo do método: 4 pts Chamada do método no programa principal:3pts

#include <stdio.h>

int contaMenoresDiagonal(int mat[10][10]) {
    int somaDiagonal = 0;
    int mediaDiagonal, contador = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < 10; i++){
        somaDiagonal += mat[i][9 - i];
    }

    mediaDiagonal = somaDiagonal / 10;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(mat[i][j] < mediaDiagonal){
                contador++;
            }
        }
    }

    return contador;
}

int main() {
    int matriz[10][10];
    int resultado;

    resultado = contaMenoresDiagonal(matriz);

    printf("\nQuantidade de elementos menores que a média da diagonal secundária: %d\n", resultado);

    return 0;
}
