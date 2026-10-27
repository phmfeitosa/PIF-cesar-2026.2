#include <stdio.h>

int main() {
    float produto = 0.0;
    int estado;

    printf("\n. : : MENU DE SELECAO : : .\n");
    printf("1 - Minas Gerais (MG)\n");
    printf("2 - Sao Paulo (SP)\n");
    printf("3 - Rio de Janeiro (RJ)\n");
    printf("4 - Mato Grosso do Sul (MS)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            printf("Voce selecionou Minas Gerais (MG)\n");
            printf("Informe o valor do produto comprado: ");
            scanf("%f", &produto);
            while (produto < 0.0) {
                printf("Erro: Valor Negativo!\n");
                printf("Informe o valor do produto comprado: ");
                scanf("%f", &produto);
            }

            printf("Valor do Produto = R$%.2f\n", produto);
            printf("Valor do Imposto = R$%.2f\n", (produto * 0.07));
            printf("Valor Final = R$%.2f\n", (produto * 1.07));
            break;
        case 2:
            printf("Voce selecionou Sao Paulo (SP)\n");
            printf("Informe o valor do produto comprado: ");
            scanf("%f", &produto);
            while (produto < 0.0) {
                printf("Erro: Valor Negativo!\n");
                printf("Informe o valor do produto comprado: ");
                scanf("%f", &produto);
            }

            printf("Valor do Produto = R$%.2f\n", produto);
            printf("Valor do Imposto = R$%.2f\n", (produto * 0.12));
            printf("Valor Final = R$%.2f\n", (produto * 1.12));
            break;
        case 3:
            printf("Voce selecionou Rio de Janeiro (RJ)\n");
            printf("Informe o valor do produto comprado: ");
            scanf("%f", &produto);
            while (produto < 0.0) {
                printf("Erro: Valor Negativo!\n");
                printf("Informe o valor do produto comprado: ");
                scanf("%f", &produto);
            }

            printf("Valor do Produto = R$%.2f\n", produto);
            printf("Valor do Imposto = R$%.2f\n", (produto * 0.15));
            printf("Valor Final = R$%.2f\n", (produto * 1.15));
            break;
        case 4:
            printf("Voce selecionou Mato Grosso do Sul (MS)\n");
            printf("Informe o valor do produto comprado: ");
            scanf("%f", &produto);
            while (produto < 0.0) {
                printf("Erro: Valor Negativo!\n");
                printf("Informe o valor do produto comprado: ");
                scanf("%f", &produto);
            }

            printf("Valor do Produto = R$%.2f\n", produto);
            printf("Valor do Imposto = R$%.2f\n", (produto * 0.08));
            printf("Valor Final = R$%.2f\n", (produto * 1.08));
            break;
        default:
            printf("Erro: Codigo Invalido! Frete Indisponivel!\n");
            printf("Encerrando atendimento...\n");
            break;
    }

    return 0;
}