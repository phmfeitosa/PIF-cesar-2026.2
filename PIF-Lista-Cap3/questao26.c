#include <stdio.h>

int main() {
    int primeiro, segundo, divisores, somatorio = 0;

    printf("Digite um primeiro numero a sua escolha: ");
    scanf("%d", &primeiro);
    printf("Digite um segundo numero a sua escolha: ");
    scanf("%d", &segundo);

    while (primeiro >= segundo) {
        printf("O primeiro numero deve ser menor que o segundo numero. Tente Novamente!\n");
        printf("Digite um primeiro numero a sua escolha: ");
        scanf("%d", &primeiro);
        printf("Digite um segundo numero a sua escolha: ");
        scanf("%d", &segundo);
    }

    for (int i = primeiro; i <= segundo; i++) {
        divisores = 0;
        
        for (int j = 1; j <= i; j++) {
            if ((i % j) == 0) {
                divisores++;
            }
        }

        if (i > 1 && divisores == 2) {
            printf("O numero %d e primo!\n", i);
            somatorio += i;
        }
    }
    printf("Somatorio final de todos os numeros primos dentro do intervalo fechado [%d, %d]: %d.", primeiro, segundo, somatorio);

    return 0;
}