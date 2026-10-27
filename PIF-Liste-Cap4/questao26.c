#include <stdio.h>

int main() {
    int mes, ano;

    printf("Informe o numero do mes: ");
    scanf("%d", &mes);
    while (mes < 1 || mes > 12) {
        printf("Erro: Valor Invalido!\n");
        printf("Informe o numero do mes (entre 1 e 12): ");
        scanf("%d", &mes);
    }
    
    printf("Informe o numero do ano: ");
    scanf("%d", &ano);

    switch (mes) {
        case 1:
            printf("Mes de Janeiro\n");
            break;
        case 2:
            printf("Mes de Fevereiro\n");
            if (((ano % 400) == 0) || ((ano % 4) == 0 && (ano % 100) != 0)) {
                printf("Ano Bissexto Detectado! Fevereiro tem 29 dias!");
            } else {
                printf("Ausencia de Anomalias Calendariais! Fevereiro segue com 28 dias...");
            }
            
            break;
        case 3:
            printf("Mes de Marco\n");
            break;
        case 4:
            printf("Mes de Abril\n");
            break;
        case 5:
            printf("Mes de Maio\n");
            break;
        case 6:
            printf("Mes de Junho\n");
            break;
        case 7:
            printf("Mes de Julho\n");
            break;
        case 8:
            printf("Mes de Agosto\n");
            break;
        case 9:
            printf("Mes de Setembro\n");
            break;
        case 10:
            printf("Mes de Outubro\n");
            break;
        case 11:
            printf("Mes de Novembro\n");
            break;
        case 12:
            printf("Mes de Dezembro\n");
            break;
        default:
            printf("Erro: Mes nao encontrado no calendario!\n");
            printf("Encerrando programa...\n");
            break;
    }

    return 0;
}