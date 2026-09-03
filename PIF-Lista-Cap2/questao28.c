#include <stdio.h>

int main() {
    float horaNormal, horaExtra, bruto;

    printf("Informe a quantidade de Horas Normais trabalhadas no período de UM ANO: ");
    scanf("%f", &horaNormal);
    printf("Informe a quantidade de Horas Extras trabalhadas no período de UM ANO: ");
    scanf("%f", &horaExtra);
    
    bruto = horaExtra * 15 + horaNormal * 10;
    
    printf("SALÁRIO BRUTO RECEBIDO: R$%.2f\n", bruto);
    printf("SALÁRIO LÍQUIDO RECEBIDO: R$%.2f\n", bruto < 12000 ? bruto : (bruto - (bruto * 0.1)));

    return 0;
}