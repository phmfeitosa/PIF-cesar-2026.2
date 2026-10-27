#include <stdio.h>

int main() {
    float distancia, consumo, eficiencia;

    printf("Digite a distancia total percorrida: ");
    scanf("%f", &distancia);
    while (distancia < 0.0) {
        printf("Erro: Distancia Percorrida Invalida! Digite a distancia total percorrida: ");
        scanf("%f", &distancia);
    }

    printf("Digite a quantidade de litros de gasolina consumidos na viagem: ");
    scanf("%f", &consumo);
    while (consumo <= 0.0) {
        printf("Erro: Volume de Combustivel Consumido Invalido! Digite a quantidade de litros de gasolina consumidos na viagem: ");
        scanf("%f", &consumo);
    }

    eficiencia = distancia / consumo;

    if (eficiencia < 8.0) {
        printf("Venda o carro... Venda imediatamente!");
    } else if (eficiencia >= 8.0 && eficiencia < 14.0) {
        printf("Carro considerado ECONOMICO.");
    } else {
        printf("Carro considerado SUPER ECONOMICO.");
    }
    
    return 0;
}