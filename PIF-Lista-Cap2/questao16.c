#include <stdio.h>


int main() {
    float alturaDegrau, alturaEscada;
    
    printf("Informe altura de cada DEGRAU em CENTÍMETRO: ");
    scanf("%f", &alturaDegrau);
    printf("Informe altura da ESCADA em METROS: ");
    scanf("%f", &alturaEscada);

    printf("O número mínimos de degraus desta escada é: %.2f", alturaEscada / (alturaDegrau / 100));
    return 0;
}