#include <stdio.h>

int main() {
    int senha;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    for(int i = 1; i <= 3; i++) {
        if (senha != 2026) {
            printf("Senha Incorreta! Digite novamente sua senha: ");
            scanf("%d", &senha);
        } else {
            printf("Acesso Concedido!");
            break;
        }

        if (i == 3) {
            printf("Conta Bloqueada por Segurança!");
            break;
        }
    }
    return 0;
}