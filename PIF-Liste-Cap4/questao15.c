#include <stdio.h>

int main() {
    int idade, anosTrabalhados;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    while (idade <= 0 || idade >= 120) {
        printf("Erro: Idade Invalida! Digite a idade do trabalhador: ");
        scanf("%d", &idade);
    }
    
    printf("Digite a quantidade de anos trabalhados: ");
    scanf("%d", &anosTrabalhados);
    while (anosTrabalhados < 0 || anosTrabalhados > idade) {
        printf("Erro: Quantidade de Anos Trabalhados Invalida! Digite a quantidade de anos trabalhados: ");
        scanf("%d", &anosTrabalhados);
    }

    if (idade >= 65 || anosTrabalhados >= 30 || (idade >= 60 && anosTrabalhados >= 25)) {
        printf("Trabalhador esta qualificado para aposentadoria!");
    } else {
        printf("Infelizmente o trabalhador nao esta qualificado para aposentadoria.\n");
    }

    return 0;
}