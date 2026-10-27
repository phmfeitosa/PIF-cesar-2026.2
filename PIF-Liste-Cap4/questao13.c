#include <stdio.h>
#include <math.h>

int main() {
    char seletor;
    float primeiro, segundo;

    printf("=== MENU DAS OPERACOES MATEMATICAS ===\n");
    printf("+ (SOMAR)\n");
    printf("- (SUBTRAIR)\n");
    printf("* (MULTIPLICAR)\n");
    printf("/ (DIVIDIR)\n");
    printf("^ (POTENCIACAO)\n");
    printf("Escolha uma opcao: ");
    scanf("%c", &seletor);

    switch (seletor) {
        case '+':
            printf("Digite o valor do primeiro numero: ");
            scanf("%f", &primeiro);
            printf("Digite o valor do segundo numero: ");
            scanf("%f", &segundo);

            printf("%.2f + %.2f = %.2f", primeiro, segundo, (primeiro + segundo));
            break;
        case '-':
            printf("Digite o valor do primeiro numero: ");
            scanf("%f", &primeiro);
            printf("Digite o valor do segundo numero: ");
            scanf("%f", &segundo);

            printf("%.2f - %.2f = %.2f", primeiro, segundo, (primeiro - segundo));
            break;
        case '*':
            printf("Digite o valor do primeiro numero: ");
            scanf("%f", &primeiro);
            printf("Digite o valor do segundo numero: ");
            scanf("%f", &segundo);

            printf("%.2f * %.2f = %.2f", primeiro, segundo, (primeiro * segundo));
            break;
        case '/':
            printf("Digite o valor do primeiro numero: ");
            scanf("%f", &primeiro);
            printf("Digite o valor do segundo numero: ");
            scanf("%f", &segundo);

            while (segundo == 0) {
                printf("Divisao por Zero detectada! Tente novamente. Digite o valor do segundo numero: ");
                scanf("%f", &segundo);
            }

            printf("%.2f / %.2f = %.2f", primeiro, segundo, (primeiro / segundo));
            break;
        case '^':
            printf("Digite o valor do primeiro numero: ");
            scanf("%f", &primeiro);
            printf("Digite o valor do segundo numero: ");
            scanf("%f", &segundo);

            printf("%.2f + %.2f = %.2f", primeiro, segundo, pow(primeiro, segundo));
            break;
        default:
            printf("Erro: Opcao Invalida!");
            break;
    }

    return 0;
}