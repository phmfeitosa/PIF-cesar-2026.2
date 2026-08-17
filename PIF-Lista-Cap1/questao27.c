#include <stdio.h>

int main() 
{
    int hora, minuto, segundo, tempo;
    printf("Informe a quantidade total em SEGUNDOS: ");
    scanf("%d", &tempo);
    hora = tempo/3600;
    minuto = (tempo%3600)/60;
    segundo = (tempo%3600)%60;

    printf("Conversor de SEGUNDOS para HORA: %dh%dmin%dseg.", hora, minuto, segundo);
    return 0;
}