#include <stdio.h>

int main() {
    int a, b;
    printf("Digite o primeiro número INTEIRO: ");
    scanf("%d", &a);
    printf("Digite o segundo número INTEIRO: ");
    scanf("%d", &b);

    printf("A SOMA dos números digitados é: %d\n", a + b);
    printf("A SUBTRAÇÃO dos números digitados é: %d\n", a - b);
    printf("A MULTIPLICAÇÃO dos números digitados é: %d\n", a * b);
    printf("A DIVISÃO dos números digitados é: %.2f\n", a / (float)(b));
    
    return 0;
}

// Para evitar uma potencial divisão por zero basta botar uma estrutura condicional antes da divisão, onde, se b = 0, imprimir um aviso de divisão por 0, caso contrário, imprimir a divisão como de costume.