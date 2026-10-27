#include <stdio.h>

int main() {
    int menu;
    
    printf("\n. : : MENU DE SELECAO : : .\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Visualizar Extrato\n");
    printf("3 - Realizar Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Selecione a opcao desejada: ");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            printf("Voce selecionou a opcao: 1 - Consultar Saldo!\n");
            printf("Baixando seu Saldo Bancario...\n");
            break;
        case 2:
            printf("Voce selecionou a opcao: 2 - Visualizar Extrato!\n");
            printf("Carregando seu Extrato Bancario...\n");
            break;
        case 3:
            printf("Voce selecionou a opcao: 3 - Realizar Transferencia!\n");
            printf("Procurando Contatos em seu Cadastro...\n");
            break;
        case 4:
            printf("Voce selecionou a opcao: 4 - Falar com Atendente!\n");
            printf("Aguarde um pouco! Estamos direcionando voce ao agente especializado...\n");
            break;
        default:
            printf("Erro: Opcao Invalida!\n");
            printf("Encerrando Atendimento...\n");
            break;
    }

    return 0;
}