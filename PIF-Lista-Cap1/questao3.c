/* 
    Esse programa foi criada para mostrar o uso de comentários em C, sejam eles em única linha, ou em linhas múltiplas. 
    O programa demonstrativo realiza as quatro operações fundamentais encontradas na matemática básicas.

                    PROGRAMA DE OPERAÇÕES MATEMÁTICAS BÁSICAS
***********************************************************************************************************************/

#include <stdio.h> /* Comando para entrada e saída de dados padrão */
#include <stdlib.h> /* Comando para funções de biblioteca padrão */

int main()  /* Função principal do programa */
{
    int num1 = 20, num2 = 10; /* Declaração de variáveis e atribuição de valores */

    /* Quatro Operações da matemática básica listadas abaixo */
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;

    /* Exibição dos resultados dos cálculos mediante valor informado */
    printf("Resultado da Soma: %d\n", soma);
    printf("Resultado da Subtração: %d\n", subtracao);
    printf("Resultado da Multiplicação: %d\n", multiplicacao);
    printf("Resultado da Divisão: %d\n", divisao);

    system("pause"); /* Comando que pausa a execução do programa e aguarda algum comando do usuário */
    return 0; /* Comando que encerra o programa */
}

/* FIM DA DEMONSTRAÇÃO */