#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("Numero %d e seu Quadrado %.0f.\n", i, pow(i, 2));
    }

    return 0;
}