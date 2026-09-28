#include <stdio.h>

int main() {
    int senha;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    if (senha == 2026) {
        printf("Acesso Concedido!");
    } else {
        for (int i = 1; i <= 3; i++) {
            printf("Senha Incorreta! Digite sua senha novamente: ");
            scanf("%d", &senha);

            if (i == 3) {
                printf("Conta Bloqueada por Excesso de Tentaivas!");
                break;
            }
        }
    }

    return 0;
}