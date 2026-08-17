#include <stdio.h>

int main() 
{
    char estudante[] = "ESTUDANTE", nota[] = "NOTA", fulano[] = "Fulano", beltrano[] = "Beltrano", ciclano[] = "Ciclano";
    float notaFulano = 9.0, notaBeltrano = 7.5, notaCiclano = 6.8;
    printf("%s%14s\n", estudante, nota);
    printf("==========\t======\n");
    printf("%s%16.2f\n%s%16.2f\n%s%16.2f\n", fulano, notaFulano, beltrano, notaBeltrano, ciclano, notaCiclano);
    printf("==========\t======\n");
    return 0;
}