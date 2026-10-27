#include <stdio.h>

int main() {
    int horas;
    float ticket = 0.0;
    printf("Informe quantas horas seu veiculo ficou estacionado aqui: ");
    scanf("%d", &horas);
    while (horas < 0) {
        printf("Erro: Anomalia Temporal Detectada!\n");
        printf("Informe quantas horas seu veiculo ficou estacionado aqui (valor positivo): ");
        scanf("%d", &horas);
    }

    if (horas == 1) {
        ticket += 2.0;
    } else if (horas == 2) {
        ticket += 4.0;
    } else if (horas == 3) {
        ticket += 7.5;
    } else if (horas == 4) {
        ticket += 10.0;
    } else {
        ticket = 10.0 + ((horas - 4) * 3.0);
    }

    printf("Seu veiculo ficou estacionado por %d horas em nosso estabelecimento.\n", horas);
    printf("Valor do Ticket de Estacionamento = R$%.2f\n", ticket);

    return 0;
}