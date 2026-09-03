#include <stdio.h>

int main() {
    float celsius;
    
    printf("Digite a temperatura em Celsius (°C):");
    scanf("%f", &celsius);

    printf("Temperatura convertida para FAHRENHEIT: %.2f\n", (celsius * 9/5) + 32);
    printf("Temperatura convertida para FAHRENHEIT: %.2f\n", celsius + 273.15);
    
    return 0;
}