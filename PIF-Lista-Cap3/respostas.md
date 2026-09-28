# Respostas — Lista de Exercícios

---

## QUESTÃO 01
    (A) O laço de repetição 'do-while' executa seus parâmetros pelo menos uma vez antes de iniciar o loop de repetição, enquanto que o laço de repetição 'while' executa ambos simultaneamente.

    (B) O laço de repetição 'for' é bem aplicado sempre que existe a necessidade de um contador de incremento/decremento (por exemplo um verificador de senha que pode errar um número predeterminado de vezes). O laço de repetição 'while' é bem aplicado para loops que precisem ser executados de maneira indeterminada (por exemplo um verificador de conexão). Já o laço de repetição 'do-while' é usado quando a condição do loop precisa ser verificada antes do loop em si (por exemplo, um jogo que pergunta se o usuário quer tentar novamente antes de encerrar).

    (C) Erro de lógica, uma vez que se trata de uma instrução vazia. A condição do código seria executado mas não realizaria nenhuma ação pois não há mais instruções.

---

## QUESTÃO 02
    (A) Pois a variável 'int soma = 0;' foi declarada dentro do loop de repetição, e está fora do escopo do printf associado. Para resolver este problema, basta declarar a variável 'int soma = 0' fora do loop de repetição (preferencialmente junto de 'int i;', na primeira linha da função principal do código).

    (B) Todo o laço de repetição será executado (uma vez que o erro de compilação está na relação do escopo entre a variável 'int soma = 0;' e o printf), entretanto, a soma almejada revelará um problema matemático, pois ela sempre retorna para 0 antes de realizar o somatório. Continue é usado para pular uma interação particular do código (podendo ser usado para enumerar os números pares, enquanto ignora os ímpares, por exemplo), enquanto o Break é usado para encerrar o laço de repetição completamente.

```c
// Código corrigido relativo a Letra (C);
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

```

    Resultado final = 115.

---

## QUESTÃO 03
    (A) A sequência exata de valores impressos no console será: 36  18  9   4   2   1.

    (B) Esta função irá obter um caracter do teclado por meio da função 'getch()', e enquanto o usuário não digitar X (estritamente maiúsculo), o código irá imprimir o sucessor de cada caracter digitado por meio de 'ch + 1'. A necessidade de parênteses se da ao fato de que existe uma variável 'ch', que recebe 'getch()' (entrada de caracter digitado do teclado), e em seguida, é verificado se esse funcionalidade é diferente de X (estritamente maiúsculo).

    (C) Uma vez que não há parâmetros para a execução de tal código, o loop seria concluído indefinidamente, sendo necessário o comando 'break;' após o 'printf', para interromper o loop eterno.

---

## QUESTÃO 04
    (A) O comando 'break;' encerra imediatamente e especificamente o laço de repetição no qual foi implementado, dando continuidade ao código na linha seguinte que esteja fora de seu laço de repetição.

    (B) Ao acionar o comando 'continue;' dentro de um laço 'for', o compilador ignora o requisito de tal comando, e executa a terceira expressão de suas instruções (responsável pelo incremento/decremento) imediatamente, retomando a execução do loop em seguida, caso possível.

    (C) O comando 'break;' interrompe apenas o laço aninhado mais interno em que está inserido, permitindo que o laço externo continue sua execução normalmente.

---

## QUESTÃO 05
    (A) O laço executará exatamente cinco iterações antes de ser encerrado.

    (B) i = 0, j = 10 | soma = 10
        i = 1, j = 9 | soma = 10
        i = 2, j = 8 | soma = 10
        i = 3, j = 7 | soma = 10
        i = 4, j = 6 | soma = 10

```c
// Código relativo a Letra (C);
#include <stdio.h>

int main() {
    int i = 0, j = 10;
    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }
    return 0;
}

```

---

## QUESTÃO 06
    (A) O valor final impresso será quatro (4).

    (B) Enquanto 'x++ < 5', haverá um incremento em seu valor inicial. Ao atingir cinco (5), a condição do loop não será mais válida, porém o pós-incremento ainda irá ocorrer, imprimindo 'Valor final de x = 5' no console.

```c
// Código relativo a Letra (C);
#include <stdio.h>

int main() {
    int x = 0;
    
    while (x <= 5) {
        x++;
    }
    printf("Valor final de x = %d\n", x);
    
    return 0;
}

```