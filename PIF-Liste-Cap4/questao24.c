#include <stdio.h>

int main() {
    int alfa, beta, gama;
    printf("Informe o valor do Angulo Alfa: ");
    scanf("%d", &alfa);
    while (alfa < 0 || alfa > 180) {
        printf("Erro: Geometria Nao Euclidana detectada! Revertendo perda de sanidade...\n");
        printf("Informe o valor do Angulo Alfa (entre 0 e 180): ");
        scanf("%d", &alfa);
    }
    printf("Informe o valor do Angulo Beta: ");
    scanf("%d", &beta);
    while (beta < 0 || beta > 180) {
        printf("Erro: Geometria Nao Euclidana detectada! Revertendo perda de sanidade...\n");
        printf("Informe o valor do Angulo Beta (entre 0 e 180): ");
        scanf("%d", &beta);
    }
    printf("Informe o valor do Angulo Gama: ");
    scanf("%d", &gama);
    while (gama < 0 || gama > 180) {
        printf("Erro: Geometria Nao Euclidana detectada! Revertendo perda de sanidade...\n");
        printf("Informe o valor do Angulo Gama (entre 0 e 180): ");
        scanf("%d", &gama);
    }

    if ((alfa + beta + gama) == 180) {
        printf("Triangulo Valido Detectado! Prosseguindo com a atividade...\n");
        if (alfa == 90 || beta == 90 || gama == 90) {
            printf("Triangulo Retangulo Detectado! Encerrando atividade...\n");
        } else if (alfa > 90 || beta > 90 || gama > 90) {
            printf("Triangulo Obtusangulo Detectado! Encerrando atividade...\n");
        } else if (alfa < 90 && beta < 90 && gama < 90) {
            printf("Triangulo Acutangulo Detectado! Encerrando atividade...\n");
        } else {
            printf("Anomalia Triangular Detectada! Encerrando atividade por seguranca...\n");
        }
    } else {
        printf("Erro: Geometria Nao Euclidana detectada! Revertendo perda de sanidade...\n");
        printf("Encerrando atividade...\n");
    }

    return 0;
}