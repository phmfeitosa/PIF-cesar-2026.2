#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Digite a nota do aluno com até duas casas decimais (0.0 a 10.0): ");
    scanf("%f", &nota);
    while (nota > 10.0 || nota < 0.0) {
        printf("Erro: Nota Invalida! Digite a nota do aluno com até duas casas decimais (0.0 a 10.0): ");
        scanf("%f", &nota);
    }

    printf("Digite o numero de faltas deste mesmo aluno (numero positivo): ");
    scanf("%d", &faltas);
    while (faltas < 0) {
        printf("Erro: Numero de Faltas Invalido! Digite o numero de faltas deste mesmo aluno (numero positivo): ");
        scanf("%d", &faltas);
    }
    
    if (nota >= 9.0 && nota <= 10.0 && faltas <= 20) {
        printf("Conceito A");
    } else if (nota >= 9.0 && nota <= 10.0 && faltas > 20) {
        printf("Conceito B");
    } else if (nota >= 7.5 && nota < 9.0 && faltas <= 20) {
        printf("Conceito B");
    } else if (nota >= 7.5 && nota < 9.0 && faltas > 20) {
        printf("Conceito C");
    } else if (nota >= 5.0 && nota < 7.5 && faltas <= 20) {
        printf("Conceito C");
    } else if (nota >= 5.0 && nota < 7.5 && faltas > 20) {
        printf("Conceito D");
    } else if (nota >= 4.0 && nota < 5.0 && faltas <= 20) {
        printf("Conceito D");
    } else if (nota >= 4.0 && nota < 5.0 && faltas > 20) {
        printf("Conceito E");
    } else {
        printf("Conceito E");
    }

    return 0;
}