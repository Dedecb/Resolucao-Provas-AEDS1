//Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de código, idade, sexo (M/F) e salário.
//A entrada de dados termina quando for digitado um código negativo. Responda:
//A média de idade das mulheres do grupo. (2 pts)
//A diferença entre o maior e o menor salário das mulheres do grupo. (2 pts)
//Quantos homens com mais de 30 anos participaram da pesquisa. (2 pts)
//Qual a média salarial do grupo. (2 pts)

#include <stdio.h>

int main() {
    int codigo, idade;
    int homensMais30 = 0, totalPessoas = 0, totalIdadeMulheres = 0, totalMulheres = 0;
    float salario, somaSalarios = 0, maiorSalarioMulheres = 0, menorSalarioMulheres = 999999;
    char sexo;

    do {
        printf("Digite o codigo (negativo para sair): ");
        scanf("%d", &codigo);
        if (codigo < 0) break;

        totalPessoas++;

        printf("Escreva o sexo [M/F]: ");
        scanf(" %c", &sexo);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        somaSalarios += salario;

        if (sexo == 'M' || sexo == 'm') {
            if (idade > 30) {
                homensMais30++;
            }
        } 
        else if (sexo == 'F' || sexo == 'f') {
            totalMulheres++;
            totalIdadeMulheres += idade;

            if (salario > maiorSalarioMulheres) {
                maiorSalarioMulheres = salario;
            }
            if (salario < menorSalarioMulheres) {
                menorSalarioMulheres = salario;
            }
        }

    } while (codigo >= 0);

    printf("\n--- RESULTADOS ---\n");

    if (totalMulheres > 0) {
        float mediaIdadeMulheres = (float)totalIdadeMulheres / totalMulheres;
        printf("Media de idade das mulheres: %.2f\n", mediaIdadeMulheres);
        printf("Diferenca entre maior e menor salario das mulheres: %.2f\n",
               maiorSalarioMulheres - menorSalarioMulheres);
    } else {
        printf("Nenhuma mulher foi cadastrada.\n");
    }

    printf("Homens com mais de 30 anos: %d\n", homensMais30);
    printf("Media salarial do grupo: %.2f\n", somaSalarios / totalPessoas);

    return 0;
}
