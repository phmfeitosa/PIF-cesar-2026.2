#include <stdio.h>

int main() {
    int numero;

    printf("Digite um valor IMPAR para a altura da estrela (entre 3 e 21): ");
    scanf("%d", &numero);

    while (numero < 3 || numero > 21 || (numero % 2) == 0) {
        printf("Valor Inválido! Digite novamente um valor IMPAR para a altura da estrela (entre 3 e 21): ");
        scanf("%d", &numero);
    }

    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= numero; j++) {
            if (i == j || (i + j) == (numero + 1))  {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}