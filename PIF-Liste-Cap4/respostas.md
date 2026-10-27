## Questão 01
    (A) No primeiro caso, 'if (x = 0)', por se tratar de um operador de ATRIBUIÇÃO (=), a variável 'x', independente de ter sido declarada antes ou não, receberá o valor '0', e prosseguirá com a estrutura condicional. Por outro lado, 'if (x == 0)', é invocado com um operador de COMPARAÇÃO (==), dando início à estrutura condicional ao ter o seu valor, que deve ter sido previamente declarado, avaliado se corresponde ao número zero (0).

    (B) Na linguagem C base, o comando 'if-else/if-else', quando usado em uma base de atributo booleano, interpreta QUAISQUER valores diferentes de zero (0) como VERDADEIROS, e apenas o próprio zero (0) como FALSO. Todavia, caso seja um operador relacional, o valor booleano será FALSO caso a comparação não seja equivalente, e VERDADEIRO caso seja equivalente.

    (C) O código será executado normalmente tanto no ANSI C, quanto no C Padrão. O bloco de código 'if (x = -5)' é uma simples estrutura condicional com atribuição de valor dentro da própria estrutura, TODAVIA, vale a pena ressaltar que a variável 'x' DEVE SER DECLARADA como variável numérica, mesmo que sem valores atribuídos, em AMBAS AS VERSÕES. Caso contrário, sem a declaração de x como variável numérica, haverá um erro de compilação.


## Questão 02
    (A) A 'Opção A' não será exibida, uma vez que, apesar de ter cumprido o critério 'if (x > 10)', não cumpriu o segundo critério para exibir a 'Opção A' por meio de 'if (y > 10)', logo, a impressão no console será 'Opção B'.

    (B) O critério oficial da Linguagem C Padrão para escrever uma estrutura condicional do tipo 'if-else' sem chaves de bloco, é possuir apenas uma instrução em cada bloco, e ter pelo menos duas instruções diferentes, uma para o 'if' e outra para o 'else'. Além disso, quando não há a presença de chaves de bloco, ocorre um fenômeno chamado 'Dangling Else', onde o 'else' da estrutura condicional é atribuída à instrução 'if' mais próxima.

    (C) O código abaixo mostra a escrita adequada, com uso de chaves de bloco, e identação adequada, para 'x <= 10':
```c
int x = 15, y = 5;
if (y > 10) {
    if (x > 10) {
        printf("Opção A\n");  
    }
    else {
        printf("Opção B\n");
    }
}
```
### OBSERVAÇÃO
A estrutura da questão, pelo menos na forma que está indentada no enunciado, dá a entender que o 'else' está se relacionando com 'if (x > 10)', TODAVIA, devido à presença de um dangling else, ela está associada ao 'if (y > 10)'. Dito isto, a identação apropriada para que não exista confusão quanto a interpretação do enunciado, seria a que está mostrada abaixo:
```c
int x = 15, y = 5;
if (x > 10)
    if (y > 10)
    printf("Opção A\n");
    else
    printf("Opção B\n");
```

## Questão 03
    (A) O funcionamento da segunda linha de código pode ser respondido com a seguinte frase: 
        "O parâmetro é verdadeiro? Caso sim, registre a primeira opção, caso contrário, registre a segunda opção."
    Para uma explicação mais acadêmica:
        'situacao' recebe a condição '(media >= 7.0)' seguido de '?'. Caso seja Verdadeira, imprime 'A'. Caso seja Falsa, imprime 'R', onde a verdadeira e a falsa, são separadas por ':'.
    No caso da variável que corresponde ao valor 'media = 6.8', o valor armazenado será 'R'.

    (B) Segue abaixo o código escrito usando a estrutura condicional tradicional 'if-else', com chaves de bloco:
```c
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    printf("A");
} else {
    prinf("R");
}
```
    (C) Não, o Operador Ternário não consegue substituir qualquer estrutura 'if-else' na Linguagem C Padrão. Como exemplo, nas situações em que ocorre mais de uma instrução, onde o operador ternário é considerado má prática por prejudicar a legibilidade do código. Além disso, vale observar que não existe a possibilidade de usar comandos como 'return', 'break' e 'continue' em um operador ternário.

## Questão 04
    (A) A impressão no console deste exercício se dá ao efeito cascata da estrutura 'switch-case', causada pela ausência do comando 'break', onde o compilador continua lendo as próximas linhas, fazendo com que seja impresso o seguinte no console:
        Prata
        Ouro
        Sem Medalha

    (B) Efeito Fall-Through (ou Efeito Cascata), é causado pela ausência de um comando 'break', que tem como papel principal, parar a execução do bloco de código associado à uma estrutura 'switch-case', fazendo com que linhas adicionais sejam impressas intencionalmente.

    (C) Na Linguagem C, é possível usar quaisquer variáveis diretamente, desde que não sejam do tipo 'float' ou 'double' ou 'String', e isso se deve ao fato de não haver precisão de ponto flutuante na estrutura 'switch-case' e a linguagem exigir que a variável seja de um tipo inteiro (como int, short, long, char).

## Questão 05
    (A) O incremento '++b' será completamente ignorado e a impressão do console será: 
        a = 0, b = 5, c = 8

    (B) A Avaliação de Curto-Circuito para um operador lógico AND (&&) é feita de maneira cadenciada, verificando se a condição anterior é Verdadeira, antes de executar a condição seguinte. Caso a condição anterior seja Falsa, a condição seguinte será ignorada. Já a Avaliação de Curto-Circuito para um operador lógico OR (||), segue uma regra diferente: Caso a condição anterior seja Falsa, a condição seguinte será executada, parando sua execução quando alguma condição for Verdadeira.

    (C) a = 0, b = 6, c = 20

## Questão 06
    (A) Múltiplas mensagens serão exibidas devido ao fato de 'idade = 65' cumprir todos os requisitos das outras saídas. Impresso no console:
        Idoso
        Adulto
        Jovem
    
    (B) Comandos 'if' independentes não possuem um critério conjunto e exclusivo de avaliação, desta forma, não há um descarte das condições seguintes, sendo compilado tudo aquilo que cumprir os requisitos. Já em uma sequência de comandos 'if-else/if-else', há um princípio de exclusão, sendo executado aquilo que condiz melhor com a condição estabelecida, seguindo a ordem de precedência e leitura do código.

    (C) Código que usa a ELEGANTÍSSIMA estrutura 'if-else/if-else', de maneira profissional, com leves alterações, em duas opções, uma de leitura mais simples e direta (Opção A), e outra mais curta (Opção B):
```c
// Opção A
int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18 && idade < 60) {
    printf("Adulto\n");
} else if (idade >= 12 && idade < 18) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```

```c
// Opção B
int idade = 25;
if (idade < 60) {
    printf("Adulto\n");
} else if (idade < 18) {
    printf("Jovem\n");
} else if (idade < 12) {
    printf("Criança\n");
} else {
    printf("Idoso\n");
}
```