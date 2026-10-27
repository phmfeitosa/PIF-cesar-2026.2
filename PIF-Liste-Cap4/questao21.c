#include <stdio.h>

int main() {
    float salario = 0.0;
    int cargo;

    printf("\n. : : MENU DE SELECAO : : .\n");
    printf("1 - Cargo: Servidor Tecnico\n");
    printf("2 - Cargo: Gerente de Equipe\n");
    printf("3 - Cargo: Demais Funcionarios\n");
    printf("Selecione o cargo desejado: ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            printf("Voce escolheu Servidor Tecnico.\n");
            printf("Informe o salario do funcionario: ");
            scanf("%f", &salario);
            while (salario < 0.0) {
                printf("Erro: Salario Negativo.\n");
                printf("Informe o salario do funcionario: ");
                scanf("%f", &salario);
            }

            if (salario <= 3000.0) {
                printf("Reajuste de 15%% sobre o salario de %.2f.\n", salario);
                printf("Valor do Reajuste = R$%.2f\n", (salario * 0.15));
                printf("Salario Final = R$%.2f\n", (salario * 1.15));
            } else {
                printf("Reajuste de 10%% sobre o salario de %.2f.\n", salario);
                printf("Valor do Reajuste = R$%.2f\n", (salario * 0.10));
                printf("Salario Final = R$%.2f\n", (salario * 1.10));
            }
            break;
        case 2:
            printf("Voce escolheu Servidor Tecnico.\n");
            printf("Informe o salario do funcionario: ");
            scanf("%f", &salario);
            while (salario < 0.0) {
                printf("Erro: Salario Negativo.\n");
                printf("Informe o salario do funcionario: ");
                scanf("%f", &salario);
            }

            if (salario <= 3000.0) {
                printf("Reajuste de 10%% sobre o salario de %.2f.\n", salario);
                printf("Valor do Reajuste = R$%.2f\n", (salario * 0.10));
                printf("Salario Final = R$%.2f\n", (salario * 1.10));
            } else {
                printf("Reajuste de 5%% sobre o salario de %.2f.\n", salario);
                printf("Valor do Reajuste = R$%.2f\n", (salario * 0.05));
                printf("Salario Final = R$%.2f\n", (salario * 1.05));
            }
            break;
        case 3:
            printf("Voce escolheu Demais Funcionarios.\n");
            printf("Informe o salario do funcionario: ");
            scanf("%f", &salario);
            while (salario < 0.0) {
                printf("Erro: Salario Negativo.\n");
                printf("Informe o salario do funcionario: ");
                scanf("%f", &salario);
            }

            printf("Reajuste de 8%% sobre o salario de %.2f.\n", salario);
            printf("Valor do Reajuste = R$%.2f\n", (salario * 0.08));
            printf("Salario Final = R$%.2f\n", (salario * 1.08));
            break;
        default:
            printf("Erro: Opcao Invalida!\n");
            printf("Encerrando atendimento..\n");
            break;
    }

    return 0;
}