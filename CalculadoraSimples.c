#include <stdio.h>

int main(){

    int valor1, valor2, operacao;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro valor:\n ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor:\n ");
    scanf("%d", &valor2);

    printf("[1] = Soma\n");
    printf("[2] = Subtracao\n");
    printf("[3] = divisao\n");
    printf("[4] = multiplicacao\n");

    printf("Escolha a operacao: ");
    scanf("%d", &operacao);

    if ( operacao == 1){

        soma = valor1 + valor2;
        printf("%d + %d = %d\n",valor1, valor2, soma );

    } else if (operacao == 2){

        subtracao = (valor1 - valor2);
        printf("%d - %d = %d\n", valor1, valor2, subtracao);

    } else if (operacao == 3){

        if (valor2 == 0){
            printf("Impossivel dividir por 0\n");

        } else {

        divisao = (float) valor1 / valor2;
        printf("%d / %d = %.2f\n", valor1, valor2, divisao);

    } 
    } else if (operacao == 4){

        multiplicacao = valor1 * valor2;
        printf("%d x %d = %d\n", valor1, valor2, multiplicacao);

    } else {
        printf("opcao invalida.");
    }
    return 0;
}