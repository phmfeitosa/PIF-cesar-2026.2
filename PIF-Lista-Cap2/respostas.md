**QUESTÃO 01**<br>
*(A)* O valor exibido será apenas 2;<br>
*(B)* Ocorre por meio de um fenômeno chamado *Casting*, que pode ocorrer Explicitamente (por meio de comandos do programador), ou Implicitamente (por meio do próprio compilador, que foi o caso deste exemplo);<br>
*(C)* Para arredondamentos existe o função round() na biblioteca <math.h>, todavia, para manter a precisão, basta declarar a variável *int valor_inteiro* como *double valor_inteiro*, ou fazer um Casting Explícito *int valor_inteiro = (double)valor_inteiro*.
***
***
<br>

**QUESTÃO 02**<br>
*(A)* A biblioteca <conio.h> não é uma biblioteca padrão da linguagem C, então sofre com problemas de portabilidade para outros sistemas operacionais (como Linux), sendo utilizada principalmente nos sistemas operacionais MS-DOS e Windows;<br>
*(B)* As funções para entrada e saída de dados fornecidas pela biblioteca padrão <stdio.h> são, respectivamente, *getchar()* e *putchar()*. Vale ressaltar que a equivalência é limitada, pois há problemas o armazenamento de uma quebra de linha (\n) no Buffer do Teclado após pressionar Enter, bem como a necessidade de pressionar Enter após a entrada de caracteres;<br>
*(C)* Levando em consideração que <conio.h> não é uma biblioteca padrão em C, e executando a questão PRECISAMENTE do jeito que foi pedido, temos:<br>
***
    #include <stdio.h>

    int main()
    {
        int x;

        do {
            x = getchar();
        } while (x == '\n');

        printf("Caractere de Entrada: %c\n", x);
        return 0;
    }
***
***
<br>

**QUESTÃO 03**<br>
*(A)* CÓDIGO RESPOSTA ABAIXO:<br>
***
    #include <stdio.h>

    int main()
    {
        int numero;
        printf("Digite um número à sua escolha: ");
        scanf("%d\n", &numero);
        
        printf("O número digitado em base DECIMAL: %d\n", numero);
        printf("O número digitado em base HEXADECIMAL: %h\n", numero);
        printf("O número digitado em base OCTAL: %o\n", numero);
        printf("O número digitado em base ASCII: %c\n", numero);

        return 0;
    }
***
***
<br>

**QUESTÃO 04**<br>
int a = 1, b = 2, c = 3, d = 4;<br>
*(A)* a += b + c  ->  a = 6;<br>
*(B)* b *= c = d + 2  ->  b = 12, c = 6;<br>
*(C)* d %= a + a + a  ->  d = 1;<br>
*(D)* d -= c -= b -= a  ->  b = 1, c = 2, d = 2;<br>
*(E)* a += b += c += 7  ->  a = 13, b = 12, c = 10;<br>
***
***
<br>

**QUESTÃO 05**<br>
int i = 1, j = 2, k = 3, n = 2;<br>
float x = 3.3, y = 4.4;<br>
*(A)* i < j + 3  ->  Verdadeiro;<br>
*(B)* 2 * i - 7 <= j - 8  ->  Verdadeiro;<br>
*(C)* -x + y >= 2.0 * y  ->  Falso;<br>
*(D)* x == y  ->  Falso;<br>
*(E)* !(n - j)  ->  Verdadeiro;<br>
*(F)* !n-j  ->  Verdadeiro;<br>
*(G)* i && j && k  ->  Verdadeiro;<br>
*(H)* i || j - 3 && k  ->  Verdadeiro;<br>
*(I)* i < j && 2 >= k  ->  Falso;<br>
*(J)* i == 2 || j == 4 || k == 5  ->  Falso;<br>
***
***
<br>

**QUESTÃO 06**<br>
*(A)* Operadores prefixados realizam seu objetivo de maneira imediata na expressão em que foram inseridos, enquanto que o operador pós-fixado realiza seu objetivo em "duas partes".<br>
*OPERADOR PREFIXADO*<br>
***
    int n = 5;
    int x = ++n;
    printf("Trecho A: n = %d, x = %d\n", n, x);
***
O compilador realiza o incremento de maneira imediata, modificando a variável naquele exato momento e realizando todo o restante das operações com um novo valor, e como resultado, o terminal irá exibir exatamente a seguinte mensagem:<br>
***
    Trecho A: n = 6, x = 6
***
*OPERADOR PÓS-FIXADO*<br>
***
    int m = 5;
    int y = m++;
    printf("Trecho B: m = %d, y = %d\n", m, y);
***
Neste caso, o compilador realiza o incremento de maneira diferente, realizando os comandos nos quais foram atribuídos as variáveis, e fazendo o incremento de maneira posterior, desta forma, o terminal irá exibir exatamente a seguinte mensagem:<br>
***
    Trecho A: m = 6, y = 5
***
*(B)* Ordem de Precedência entre argumentos não são necessariamente a "ordem de interpretação do compilador". Neste exemplo temos que a variável n foi acessada três vezes simultaneamente no mesmo argumento em que a própria variável foi alterada. Para evitar este tipo de problema, podemos simplesmente separar o comando em linhas diferentes na ordem que preferir.