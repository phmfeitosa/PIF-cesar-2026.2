#include <stdio.h>

int main() {
    int hora, minuto, segundo, duracao;
    printf("Informe a HORA do início do experimento: ");
    scanf("%d", &hora);
    printf("Informe o MINUTO do início do experimento: ");
    scanf("%d", &minuto);
    printf("Informe o SEGUNDO do início do experimento: ");
    scanf("%d", &segundo);
    printf("Informe a duração do experimento em SEGUNDOS: ");
    scanf("%d", &duracao);

    printf("HORÁRIO DE INÍCIO DO EXPERIMENTO: %d Horas %d Minutos %d Segundos\n.", hora, minuto, segundo);
    printf("HORÁRIO DE TÉRMINO DO EXPERIMENTO: %d:%d:%d", (duracao / 3600) + hora, ((duracao % 3600) / 60) + minuto, (duracao /3600 / 60) + segundo);

    return 0;
}