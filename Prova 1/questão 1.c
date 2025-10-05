//Escreva um programa na linguagem C que realize as seguintes operações:
//Peça ao usuário para inserir dois números inteiros positivos, A e B, onde A < B.
//Caso A ≥ B, emita mensagem e peça novos valores até que a condição seja satisfeita. (2,0 pts)
//Utilize um comando de repetição para percorrer todos os números no intervalo fechado entre A e B. (A e B entram no intervalo) (2,0 pts)
//Para cada número no intervalo, o programa deve informar se esse número é primo. (2,0 pts)
//Para os valores do intervalo: quantos números do intervalo são divisíveis por 2 e 3 ao mesmo tempo? (2,0 pts)

#include <stdio.h>

int ehPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b, divisiveis = 0;

    printf("Digite 2 numeros inteiros positivos, A e B, onde A < B: ");
    scanf("%d %d", &a, &b);

    while (a <= 0 || b <= 0 || a >= b) {
        printf("Valores invalidos (devem ser positivos e A < B). Digite novamente: ");
        scanf("%d %d", &a, &b);
    }

    for (int i = a; i <= b; i++) {
        // Verifica se é primo
        if (ehPrimo(i)) {
            printf("%d eh primo.\n", i);
        } else {
            printf("%d nao eh primo.\n", i);
        }

        // Conta os divisíveis por 2 e 3
        if (i % 2 == 0 && i % 3 == 0) {
            divisiveis++;
        }
    }

    printf("\n%d numeros sao divisiveis por 2 e 3 ao mesmo tempo.\n", divisiveis);

    return 0;
}
