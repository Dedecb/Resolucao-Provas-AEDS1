//Questão 02 – (10 ptos)
//Faça um procedimento que receba o primeiro vetor e devolva em um segundo vetor contendo 1 se o número é 
//maior que a média dos elementos do primeiro vetor, 0 se for igual a média e -1 se for menor que a média.
//Obs. ambos vetores contém de 10 posições
//Faça um programa que leia um vetor de 10 posições, utilize o procedimento criado para preencher o segundo vetor e imprima esses vetores, um ao lado do outro. Exemplo:
//V1 3 6  10  5 
//V2-1 0  1  -1
//Media=(3+6+10+5)/4=6
//Regra de pontuação: cabeçalho do método: 2 pts Corpo do método: 4 pts Chamada do método no programa principal:4pts

#include <stdio.h>

void calculoVetor(int vet1[10], int vet2[10]) {
    int media = 0, mediaTotal;

    for (int i = 0; i < 10; i++) {
        printf("Escreva o valor da posição %d do vetor: ", i);
        scanf("%d", &vet1[i]);
        media += vet1[i];
    }

    mediaTotal = media / 10;

    for (int i = 0; i < 10; i++) {
        if (vet1[i] > mediaTotal) {
            vet2[i] = 1;
        } else if (vet1[i] < mediaTotal) {
            vet2[i] = -1;
        } else {
            vet2[i] = 0;
        }
    }
}

void mostraVetor(int vet1[10], int vet2[10]) {
    printf("\nV1\tV2\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\n", vet1[i], vet2[i]);
    }
}

int main() {
    int vet1[10], vet2[10];

    calculoVetor(vet1, vet2);
    mostraVetor(vet1, vet2);

    return 0;
}
