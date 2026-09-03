#include <stdio.h>

int main() {
    float velocidade;

    printf("Digite a velocidade em km/h (quilômetros por hora): ");
    scanf("%f", &velocidade);

    printf("Velocidade em m/s (metros por segundo): %.2f", velocidade / 3.6);
    
    return 0;
}