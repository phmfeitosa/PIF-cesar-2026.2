#include <stdio.h>

int main() {
    char ideograma = 32;

    printf("Numero Decimal X Valor Hexadecimal X Caractere\n");
    while (ideograma < 126) {
        printf("%d\t\t\t%X\t\t\t%c\n", ideograma, ideograma,ideograma);
        ideograma++;
    }

    return 0;
}