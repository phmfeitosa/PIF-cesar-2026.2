#include <stdio.h>

int main() {
    float notaGeral, menorNota, maiorNota, mediaTurma, somaNotas = 0;
    int contadorAlunos;

    printf("Digite uma nota para avaliar (digite '-1' ou '-1.0' para encerrar): ");
    scanf("%f", &notaGeral);

    if (notaGeral != -1 || notaGeral != -1.0) {
        menorNota = notaGeral;
        maiorNota = notaGeral;
    }
    while (notaGeral != -1 || notaGeral != -1.0) {
        somaNotas += notaGeral; 
        contadorAlunos++;

        if (notaGeral < menorNota) {
            menorNota = notaGeral;
        }

        if (maiorNota < notaGeral) {
            maiorNota = notaGeral;
        }

        printf("Digite uma nota para avaliar (digite '-1' ou '-1.0' para encerrar): ");
        scanf("%f", &notaGeral);
    }

    if (contadorAlunos > 0) {
        mediaTurma = somaNotas / contadorAlunos;

        printf("\n=== Estatisticas da Turma ===\n");
        printf("Total de Alunos Avaliados: %d\n", somaNotas);
        printf("Maior Nota da Turma: %.2f\n", maiorNota);
        printf("Menor Nota da Turma: %.2f\n", menorNota);
        printf("Media Geral da Turma: %.2f\n", mediaTurma);
    } else {
printf("\nNenhuma nota foi informada.\n");
    }

    return 0;
}