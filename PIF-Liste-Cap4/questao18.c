#include <stdio.h>

int main() {
    float temperatura;
    int seletor;

    printf("\n=== CONVERSOR DE TEMPERATURA ===\n");
    printf("1 -> Celsius para Fahrenheit.\n");
    printf("2 -> Celsius para Kelvin.\n");
    printf("3 -> Fahrenheit para Celsius.\n");
    printf("4 -> Kelvin para Celsius.\n");
    printf("Selecione uma Opção: ");
    scanf("%d", &seletor);

    switch (seletor) {
        case 1:
            printf("Digite a temperatura em CELSIUS: ");
            scanf("%f", &temperatura);

            printf("\n=== TEMPERATURA CELSIUS --- TEMPERATURA FAHRENHEIT ===\n");
            printf("\t%.2fC\t\t --- \t\t%.2fF", temperatura, ((temperatura * 1.8) + 32));
            break;
        case 2:
            printf("Digite a temperatura em CELSIUS: ");
            scanf("%f", &temperatura);

            printf("\n=== TEMPERATURA CELSIUS --- TEMPERATURA KELVIN ===\n");
            printf("\t%.2fC\t\t --- \t\t%.2fK", temperatura, (temperatura + 273.15));
            break;
        case 3:
            printf("Digite a temperatura em FAHRENHEIT: ");
            scanf("%f", &temperatura);

            printf("\n=== TEMPERATURA FAHRENHEIT --- TEMPERATURA CELSIUS ===\n");
            printf("\t%.2fF\t\t --- \t\t%.2fC", temperatura, ((temperatura - 32) / 1.8));
            break;
        case 4:
            printf("Digite a temperatura em KELVIN: ");
            scanf("%f", &temperatura);

            printf("\n=== TEMPERATURA KELVIN --- TEMPERATURA CELSIUS ===\n");
            printf("\t%.2fK\t\t --- \t\t%.2fC", temperatura, (temperatura - 273.15));
            break;
        default:
            printf("Erro: Opcao Invalida!");
    }

    return 0;
}