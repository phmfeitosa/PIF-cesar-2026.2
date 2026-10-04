#include <stdio.h>

int main() {
    int opcao;
    float salario;

    do {
        printf("===== MENU DE SELECAO =====\n");
        printf("(1) --- Reajuste Salarial.\n");
        printf("(2) --- Retencao de Imposto de Renda.\n ");
        printf("(3) --- Encerrar Programa.\n");

        printf("Selecione uma das opcoes do menu acima: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                printf("Informe o valor do salario acionado para reajuste: ");
                scanf("%f", &salario);
                
                while (salario <= 0) {
                    printf("Valor Invalido! Tente novamente com um valor positivo!\n");
                    printf("Informe o valor do salario acionado para reajuste: ");
                    scanf("%f", &salario);
                }

                if (salario <= 2000.0) {
                    printf("Novo valor do salario apos o reajuste: R$%.2f\n\n", (salario + (salario * 0.15)));
                } else {
                    printf("Novo valor do salario apos o reajuste: R$%.2f\n\n", (salario + (salario * 0.10)));
                }

                break;
            case 2:
                printf("Informe o valor do salario acionado para calcular o Imposto de Renda devido: ");
                scanf("%f", &salario);
                
                while (salario <= 0) {
                    printf("Valor Invalido! Tente novamente com um valor positivo!\n");
                    printf("Informe o valor do salario acionado para calcular o Imposto de Renda devido: ");
                    scanf("%f", &salario);
                }

                if (salario <= 3000.0) {
                    printf("Novo valor do salario apos o reajuste: R$%.2f\n\n", (salario - (salario * 0.08)));
                } else {
                    printf("Novo valor do salario apos o reajuste: R$%.2f\n\n", (salario - (salario * 0.15)));
                }

                break;
            case 3:
                printf("Obrigado por utilizar nossos servicos, volte sempre!\n");
                break;
            default:
                printf("Voce selecionou uma opcao invalida!\n");
                printf("Selecione uma das opcoes do menu abaixo: ");
                scanf("%d", &opcao);
        }

    } while (opcao != 3);

    return 0;
}