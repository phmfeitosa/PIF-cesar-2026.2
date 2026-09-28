#include <stdio.h>

int main() {
    for(int i = 0; i <= 100; i += 5) {
        printf("Valor em Celsius (%dºC) || Valor em Fahrenheit (%.2f)\n", i, (32 + ((9*i)/5.0)));
        printf("Valor em Celsius (%dºC) || Valor em Kelvin (%.2f)\n", i, (i + 273.15));
        printf("-----------------------------------------------------------------------------\n\n");
    }

    return 0;
}