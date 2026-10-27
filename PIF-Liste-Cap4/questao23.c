#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Informe um dia do mes a sua escolha: ");
    scanf("%d", &dia);
    while (dia < 1 || dia > 31) {
        printf("Erro: Valor Invalido!\n");
        printf("Informe um dia do mes a sua escolha: ");
        scanf("%d", &dia);
    }
    printf("Informe um mes do ano a sua escolha: ");
    scanf("%d", &mes);
    while (mes < 1 || mes > 12) {
        printf("Erro: Valor Invalido!\n");
        printf("Informe um mes do ano a sua escolha: ");
        scanf("%d", &mes);
    }
    printf("Informe um ano a sua escolha: ");
    scanf("%d", &ano);

    if (((ano % 400) == 0) || ((ano % 4) == 0 && (ano % 100) != 0)) {
        while (mes == 2 && dia > 29) {
            printf("Erro: Valor Invalido!\n");
            printf("Ano Bissexto! Fevereiro (mes 2) tem 29 dias!\n");
            printf("Informe um dia do mes (29 ou menor) a sua escolha: ");
            scanf("%d", &dia);
        }
    } else {
        while (mes == 2 && dia > 28) {
            printf("Erro: Valor Invalido!\n");
            printf("Ano Padrao! Fevereiro (mes 2) tem 28 dias!\n");
            printf("Informe um dia do mes (28 ou menor) a sua escolha: ");
            scanf("%d", &dia);
        }
    }

    while ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        printf("Erro: Valor Invalido!\n");
        printf("Informe um dia do mes (30 ou menor) a sua escolha: ");
        scanf("%d", &dia);
    }

    switch (mes) {
        case 1:
            printf("%d de Janeiro de %d", dia, ano);
            break;
        case 2:
            printf("%d de Fevereiro de %d", dia, ano);
            break;
        case 3:
            printf("%d de Marco de %d", dia, ano);
            break;
        case 4:
            printf("%d de Abril de %d", dia, ano);
            break;
        case 5:
            printf("%d de Maio de %d", dia, ano);
            break;
        case 6:
            printf("%d de Junho de %d", dia, ano);
            break;
        case 7:
            printf("%d de Julho de %d", dia, ano);
            break;
        case 8:
            printf("%d de Agosto de %d", dia, ano);
            break;
        case 9:
            printf("%d de Setembro de %d", dia, ano);
            break;
        case 10:
            printf("%d de Outubro de %d", dia, ano);
            break;
        case 11:
            printf("%d de Novembro de %d", dia, ano);
            break;
        case 12:
            printf("%d de Dezembro de %d", dia, ano);
            break;
        default:
            printf("Erro: Mes nao encontrado no calendario!\n");
            printf("Encerrando atividade...\n");
            break;
    }

    return 0;
}