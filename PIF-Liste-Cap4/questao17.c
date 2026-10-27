#include <stdio.h>

int main() {
    float valor;
    int seletor = -1;

    while (seletor != 0) {
        printf("\n\n=== MENU DE PAGAMENTO ===\n");
        printf("1 -> Pagamento Imediato com 10%% de Desconto!\n");
        printf("2 -> Parcelamento em Tres Vezes (3x) Sem Juros!\n");
        printf("0 -> Sair do Menu de Pagamento.\n\n");
        printf("Selecione uma Opção: ");
        scanf("%d", &seletor);

        switch (seletor) {
        case 1:
            printf("Digite o valor total da sua compra: ");
            scanf("%f", &valor);

            printf("=== Resumo da Operação ===\n");
            printf("Valor Total das Compras = R$%.2f.\n", valor);
            printf("Valor Final das Compras = R$%.2f.\n", (valor * 0.9));
            printf("Comissao do Vendedor Responsavel = R$%.2f.", (valor *0.05));
            continue;
        case 2:
            printf("Digite o valor total da sua compra: ");
            scanf("%f", &valor);

            printf("=== Resumo da Operação ===\n");
            printf("Valor Total das Compras = R$%.2f.\n", valor);
            printf("Valor de Cada Parcela = R$%.2f.\n", (valor / 3));
            printf("Comissao do Vendedor Responsavel = R$%.2f.", (valor *0.05));
            continue;
        case 0:
            printf("Obrigado por usar nossos servicos! Volte sempre!\nEncerrando atendimento...");
            break;
        default:
            printf("Erro: Opcao Invalida! Tente Novamente!\n");
        }
    }

    return 0;
}