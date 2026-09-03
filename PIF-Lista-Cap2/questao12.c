#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero INTEIRO: ");
    scanf("%d", &numero);

    printf("O ANTECESSOR do numero digitado é: %d\n", --numero);
    ++numero;
    printf("O SUCESSOR do numero digitado é: %d\n", ++numero);

    return 0;
}

/*
OBS1: Operadores unários adicionam/subtraem apenas uma unidade por vez quando são chamados, então basta realizar uma subtração desta maneira para exibir o antecessor, e duas adições em linhas diferentes (essencialmente chamando esta operação duas vezes), para exibir o sucessor.
OBS2.: O operador de pré-incremento foi escolhido pois a mudança na variável é aplicada imediatamente, enquanto que o pós-incremento, realizaria a modificação após a execução deste código em específico.
*/