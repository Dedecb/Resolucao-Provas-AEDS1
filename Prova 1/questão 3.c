//Você deverá verificar o dígito verificador (DV) de um número de 5 dígitos, onde:
//Os 4 primeiros dígitos formam o número base.
//O 5º dígito é o DV.
//A verificação utiliza o seguinte critério:
//Definição do DV:
//Considere os dígitos do número base como d1 d2 d3 d4 (da esquerda para a direita).
//Calcule a soma ponderada:
//S = d1×5 + d2×4 + d3×3 + d4×2 (2 pt)
//O dígito verificador esperado é:
//DV_esperado = resto da divisão S por 7

#include <stdio.h>

int main(){
    int numero, d1, d2, d3, d4, dv, S, DV_esperado;
    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &numero);
    d1 = (numero / 10000) % 10;
    d2 = (numero / 1000) % 10;  
    d3 = (numero / 100) % 10;
    d4 = (numero / 10) % 10;
    dv = numero % 10;
    S = d1 * 5 + d2 * 4 + d3 * 3 + d4 * 2;
    DV_esperado = S % 7;
    if (DV_esperado == dv) {
        printf("O digito verificador esta correto.\n");
    } else {
        printf("O digito verificador esta incorreto. O digito verificador esperado e: %d\n", DV_esperado);
    }
    return 0;
}