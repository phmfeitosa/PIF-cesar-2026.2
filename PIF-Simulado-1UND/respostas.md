# Respostas — Lista de Exercícios

---

## QUESTÃO 01

    (A) Não. Por se tratar de uma linguagem altamente case sensitive, as variáveis são tratadas como diferentes.

    (B) Não. A palavra-chave 'Main' não é reconhecida, uma vez que a palavra chave de ponto de entrada é a 'main'.

    (C) Sim. Mesma justificativa da primeira afirmação.

    (D) Falso. Por mais que existam diferenças entre sistemas operacionais, o compilador do C não é algo que depende exclusivamente destes.

---

## QUESTÃO 02

    Existem mais de três erros:
    1º Erro: Presença de ponto e virgula na segunda linha.
    2º Erro: Função de entrada 'main' escrito com letra maiúscula na quarta linha.
    3º Erro: Ausência de aspas no printf para indicar o que será impresso no console, sétima linha.
    4º Erro: 'cout << endl;' até onde eu sei é uma linha de código presente em versões mais modernas de C (como C++), mas não no C padrão.

---

## QUESTÃO 03

    int a = 2, b = 4, c = 5, d = 10;

    (A) a += b + c == a = 2 + 4 + 5 == a = 11; // Valor Final de A (11);

    (B) b *= c = d - 2 // c = 10 - 2 == c = 8 // b = 4 * 8 == b = 32 // Valor Final de B (32) e Valor Final de C (8);

    (C) d %= a + 3 == d = 10 % (2 + 3) == d = 0 // Valor Final de D (0);

    (D) a += b += c += 5 // c = 5 + 5 == c = 10 // b = 4 + 10 == b = 14 // a = 2 + 14 == a = 16 // Valor Final de A (16), Valor Final de B (14) e Valor Final de C (10);

---

## QUESTÃO 04

    int i = 2, j = 3, k = 0;
    float x = 2.5, y = 5.0;

    (A) i < j + 2 // Valor Lógico Verdadeiro;

    (B) 2 * i - 5 <= j - 4 // Valor Lógico Verdadeiro;

    (C) !k && (x + y >= 7.5) // Valor Lógico Verdadeiro;

    (D) !(i == j) || (y / x == 2.0) // Valor Lógico Verdadeiro;

    (E) i == 2 && j == 4 || k == 0 // Valor Lógico Verdadeiro;

---

## QUESTÃO 05

    (A) O laço de repetição 'do-while' executa seus parâmetros pelo menos uma vez antes de verificar o loop de repetição, enquanto que o laço de repetição 'while' verifica o loop de repetição e em seguida, executa seus parâmetros;

    (B) Geralmente em situações que existe um contador atrelado a um operador de incremento/decremento a cada execução do loop ou quando existe um número alvo desejado de execuções do loop de repetição;

    (C) Se trata de um erro de lógica, afinal seria uma instrução vazia, onde o compilador teria uma condição mas não teria uma ordem para executar dentro (ou fora) desta condição.

---

## QUESTÃO 06

    (A) Pois a variável 'int soma = 0;' foi declarada dentro do loop de repetição, e está fora do escopo do printf. Para resolver este problema, basta declarar 'int soma = 0' fora do loop de repetição (preferencialmente junto de 'int i;').

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
