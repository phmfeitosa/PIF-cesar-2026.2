#include <stdio.h>

int main() {
    float salario;

    printf("Informe o valor bruto do salário em reais: ");
    scanf("%f", &salario);

    printf("SALÁRIO LÍQUIDO: R$%.2f", salario + (salario * 0.05) - (salario * 0.07));

    return 0;
}