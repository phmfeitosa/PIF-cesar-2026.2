#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int primeiroDado = (rand() % 6) + 1;
    int segundoDado = (rand() % 6) + 1;
    int terceiroDado = (rand() % 6) + 1;
    
    printf("Rolagem do primeiro dado (%d) --- rolagem do segundo dado (%d) --- rolagem do terceiro dado (%d).", primeiroDado, segundoDado, terceiroDado);

    return 0;
}