#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Digite a data desejada usando uma barra ( / ) como separador entre dia, mês e ano (Exemplo: 02/09/2026): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    printf("Data digitada: %d/%d/%d\n", ano, mes, dia);

    return 0;
}