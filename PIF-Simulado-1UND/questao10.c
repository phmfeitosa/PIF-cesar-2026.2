#include <stdio.h>

int main() {
    int total, hora, minuto, segundo;

    printf("Informe um valor em segundos: ");
    scanf("%d", &total);

    hora = total / 3600;
    minuto = (total % 3600) / 60;
    segundo = ((total % 3600) % 60) % 60;


    printf("Voce informou %d segundos, que resulta em %dH%dM%dS.", total, hora, minuto, segundo);

    return 0;
}