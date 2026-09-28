#include <stdio.h>

int main() {
    int limite;

    printf("Digite um numero limitador: ");
    scanf("%d", &limite);

    if (limite < 0) {
        printf("Numero Invalido! Digite um numero limitador novamente: ");
        scanf("%d", &limite);
    } else if (0 < limite && limite < 15) {
        printf("Nenhum numero multiplo de 15 encontrado! :()");
    } else {
        for (int i = 1; i <= limite; i++) {
            if ((i % 15) == 0) {
                printf("Numeros Múltiplos de 15: %d\n", i);
            }
        }
    }    
    
    return 0;
}