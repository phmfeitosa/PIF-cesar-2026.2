#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char chute, letra;
    int contador = 0;

    srand(time(NULL));
    letra = rand() % 26 + 'a';

    printf("=== Jogo de Adivinhacao ===\n");
    
    while (chute != letra) {
        printf("Digite uma letra minuscula para tentar adivinhar a letra secreta: ");
        scanf(" %c", &chute);
    
        if (chute < 'a' || chute > 'z') {
            printf("Erro de Digitacao! Digite apenas LETRAS MINUSCULAS!\n\n");
            continue;
        }

        contador++;

        if (chute < letra) {
            printf("A letra secreta vem DEPOIS de '%c'.\n", chute);
        }
        else if (chute > letra) {
            printf("A letra secreta vem ANTES de '%c'.\n", chute);
        }
    }

    printf("\nParabens! Voce acertou!\n");
    printf("Total de tentativas: %d\n", contador);

    return 0;
}