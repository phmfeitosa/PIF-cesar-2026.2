#include <stdio.h>

int main() {
    int valorSaque, valorInicial, cemContador = 0, cinquentaContador = 0, vinteContador = 0, dezContador = 0, cincoContador = 0, doisContador = 0;

    printf("Informe o valor do saque em reais (R$): ");
    scanf("%d", &valorSaque);

    valorInicial = valorSaque;

    while (valorSaque <= 0) {
        printf("Valor de Saque Invalido! Tente novamente com um valor maior do que zero.\n");
        printf("Informe o valor do saque em reais (R$): ");
        scanf("%d", &valorSaque);
    };

    while (valorSaque > 0) {
        if (valorSaque >= 100) {
            valorSaque -= 100;
            cemContador++;
        } else if (50 <= valorSaque && valorSaque < 100) {
            valorSaque -= 50;
            cinquentaContador++;
        } else if (20 <= valorSaque && valorSaque < 50) {
            valorSaque -= 20;
            vinteContador++;
        } else if (10 <= valorSaque && valorSaque < 20) {
            valorSaque -= 10;
            dezContador++;
        } else if (5 <= valorSaque && valorSaque < 10) {
            valorSaque -= 5;
            cincoContador++;
        } else if (2 <= valorSaque && valorSaque < 5) {
            valorSaque -= 2;
            doisContador++;
        } else {
            printf("\nValor Faltante: R$%d.\n\n", valorSaque);
            break;
        }
    }

    printf("===== RESUMO DA OPERACAO =====\n");
    printf("Voce sacou R$%d e recebeu o saque em: \n%d notas de R$100.\n%d notas de R$50.\n%d notas de R$20.\n%d notas de R$10.\n%d notas de R$5.\n%d notas de R$2.\n", valorInicial, cemContador, cinquentaContador, vinteContador, dezContador, cincoContador, doisContador);

    return 0;
}