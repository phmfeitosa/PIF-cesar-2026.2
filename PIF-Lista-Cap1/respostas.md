**QUESTÃO 04**   
CÓDIGO EXEMPLO DA QUESTÃO 04   
#include <stdio.h> (sem erros)   
#include <stdlib.h>; (colocou ; após o >)   

int main{}(inverteu o uso de {} e () na função main)   
(   
    printf( Existem %d semanas no ano.,52); (faltou colocar aspas duplas no texto e colocar o ; no final)   
    cout << endl; (utilizou cout, usado em C++, ao invés de printf, típico de linguagem C)   
    return 0;   
)   
***


Na inclusão das bibliotecas, o código exemplo da questão 04 colocou um ; após o > da biblioteca <stdlib.h>, o que é incorreto.   
Na função main, o código exemplo da questão 04 inverteu o uso de {} e () na função main, o que é incorreto.   
No printf, o código exemplo da questão 04 não colocou aspas duplas no texto e não colocou o ; no final, o que é incorreto.   
O código exemplo da questão 04 utilizou cout, que é usado em C++, ao invés de printf, que é típico da linguagem C, o que é incorreto.   
***
***


**QUESTÃO 05**   
CÓDIGO EXEMPLO DA QUESTÃO 05   
main()   
{   
    printf("Linguagem C");   
    system("pause");   
}   
***


No código acima, faltou a inclusão de ambas as bibliotecas: <stdio.h> e <stdlib.h>.    
Também faltou a colocação correta da função main() || int main ().   
Por fim o código exemplo não colocou o return 0;    
***
***


**QUESTÃO 06**   
CÓDIGO EXEMPLO DA QUESTÃO 06   
main()   
{   
    int a=1; b=2; c=3;   
    printf("Os números são: %d %d %d\n", a, b, c, d);   
    system("pause");   
}   
***

No código acima, faltou a inclusão de ambas as bibliotecas: <stdio.h> e <stdlib.h>.    
Também faltou a colocação correta da função main() || int main ().   
Separação incorreta das variáveis a, b e c, que deveriam ser separadas por vírgula e não por ponto e vírgula.   
Adição de uma variável d no printf, que não foi declarada anteriormente.   
Por fim o código exemplo não colocou o return 0;    
***
***


**QUESTÃO 07**   
(A) printf("\n\tBom dia! Shirley.");   
    DESCRIÇÃO: Irá imprimir a frase dentro das aspas com uma quebra de linha no início e uma tabulação horizontal antes da frase.   


(B) printf("Você já tomou café? \n");   
    DESCRIÇÃO: Irá imprimir a frase dentro das aspas com uma quebra de linha ao final da frase.   


(C) printf("\n\nA solução não existe!\nNão insista.");   
    DESCRIÇÃO: Irá imprimir a frase dentro das aspas com duas quebras de linha no início e uma quebra de linha após a primeira exclamação.   

(D) printf("Duas\tlinhas\tde\tsaída\nou\tuma.");   
    DESCRIÇÃO: Irá imprimir a frase dentro das aspas com uma tabulação horizontal entre as palavras "Duas", "linhas", "de", "saída" e uma quebra de linha após a palavra "saída". Após isto, haverá uma tabulação horizontal antes da palavra "uma."   

(E) printf("%s\n%s\n%s\n", "um", "dois", "três");   
    DESCRIÇÃO: Irá imprimir a frase dentro das aspas com uma quebra de linha no início e uma tabulação horizontal antes da frase.   
***
***


**QUESTÃO 08**   
DESCRIÇÃO DO PROGRAMA: Imprime uma mensagem escrita Primeiro programa entre aspas duplas. Em seguida, irá pausar a execução do programa enquanto aguarda por uma instrução do usuário, e mediante a qualquer comando, encerrará o programa.    
O \n serve para realizar uma quebra de linha. O \t serve para realizar uma tabulação horizontal. Enquanto que o \" simplesmente é um comando para imprimir aspas duplas na frase desejada, uma vez que o compilador entende que uma String deve sempre estar entre aspas duplas.   
    OBS.: Se eu digitar apenas --- printf("\n\t"Primeiro programa"") --- o compilador irá interpretar que existe uma String entre o primeiro conjunto de aspas duplas, seguido de uma instrução chamada Primeiro programa (a qual não está definida), e outra String vazia dentro do próximo conjunto de aspas duplas.   

SAÍDA DO PROGRAMA:   

    "Primeiro programa"   
***
***


**QUESTÃO 09**   
EXPLICAÇÃO DA QUESTÃO: É importante ressaltar como o compilador entende o uso de caracteres especiais. Dentro de aspas simples, será impresso apenas a sequência de escape (por exemplo, '\n', '\t', quando associado ao %c, será interpretado como uma quebra de linha ou tabulação horizonta, respectivamente) ou caracter desejado ('A', ou 'B', irá imprimir A ou B), enquanto que uma String deve sempre estar entre aspas duplas. Desta forma, ao digitar '\n', '\t', '\"', o compilador entenderá que deve quebrar uma linha, realizar uma tabulação horizontal e imprimir uma aspas dupla, respectivamente. Entretanto, o segundo comando printf, está com a instrução errada, podendo ser corrigida de duas maneiras:   
1 --- printf("%c", '\"'); Utilizando aspas simples e o comando %c para imprimir o caracter desejado.   
2 --- printf("%s", "\""); Utilizando aspas duplas e o comando %s (em vez de %c) para imprimir a String desejada.   


OBS.: Para imprimir uma contrabarra (\), é necessário usar o comando "\\" (para %s) ou '\\' (para %c), uma vez que o compilador entende que a contrabarra é um caracter especial, utilizado para sequências de escape (comandos especiais que seriam de difícil implementação em C), e não um caracter qualquer.   
***
***


**QUESTÃO 10**   
DESCRIÇÃO DO PROBLEMA: C é considerada uma linguagem case sensitive, ou seja, diferencia estritamente letras maiúsculas de minúsculas, e faz isso de tal maneira que uma variável declarada com letras minúsculas é diferente de uma variável declarada com letras maiúsculas. Desta forma, ao declarar três variáveis com o mesmo nome, mas com quaisquer diferenças na combinação de letras maiúsculas e minúsculas, o compilador entenderá que são três variáveis diferentes, e, por sua vez, irá alocar três espaços diferentes na memória para cada uma delas.   

Alternativa (B), a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas.   
***
***


**QUESTÃO 11**   
\r --- Sequência de Escape (Tipo de Constante) --- char (Tipo Base em C)   
2130 --- Constante Inteira Decimal (Tipo de Constante) --- int (Tipo Base em C)   
-123 --- Constante Inteira Decimal (Tipo de Constante) --- int (Tipo Base em C)   
33.28 --- Constante de Ponto Flutuante (Tipo de Constante) --- double (Tipo Base em C)   
0XFA --- Constante Inteira Hexadecimal (Tipo de Constante) --- int (Tipo Base em C)   
0101 --- Constante Inteira Octal (Tipo de Constante) --- int (Tipo Base em C)   
2.0e30 --- Constante de Ponto Flutuante (Tipo de Constante) --- double (Tipo Base em C)   
\xDC --- Sequência de Escape (Tipo de Constante) --- char (Tipo Base em C)   
'\"' --- Sequência de Escape (Tipo de Constante) --- char (Tipo Base em C)   
'\\' --- Sequência de Escape (Tipo de Constante) --- char (Tipo Base em C)   
'F' --- Constante de Caractere (Tipo de Constante) --- char (Tipo Base em C)   
0 --- Constante Inteira Decimal (Tipo de Constante) --- int (Tipo Base em C)   
'\0' --- Sequência de Escape (Tipo de Constante) --- char (Tipo Base em C)   
"F" --- Constante de String (Tipo de Constante) --- char[] (Tipo Base em C)   
-4567.89 --- Constante de Ponto Flutuante (Tipo de Constante) --- double (Tipo Base em C)   
***
***


**QUESTÃO 12**   
(A) int a --- Correto   
(B) float b --- Correto   
(C) double float c --- Incorreto (Double e Float são tipos de variáveis, podendo ser float c ou double c, mas não ambas)   
(D) unsigned char d --- Correto   
(E) unsigned e --- Correto   
(F) long float f --- Incorreto (A palavra específica 'long' só pode ser usada em variáveis de tipo int, short e double)   
(G) long g --- Correto   
(H) long double --- Correto   
***
***


**QUESTÃO 13**   
Arquivos do tipo Header (.h) em C são uma espécie de ponte entre o programador e máquina, fornecendo declarações e definições que permitem ao compilador conhecer e utilizar determinados recursos, por exemplo, utilizar determinados tipos de funções, algumas definições de termos específicos, ou seja:   

(C) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.   
***
***


**QUESTÃO 14**   
Como dito na questão anterior, os arquivos do tipo Header (.h) servem como um tipo de manual que facilita a conexão do programador com a máquina, especificando determinados comportamentos que o programador possa requerer por meio de funções, tipos e constantes.  Desta maneira:   

(A) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.   
***
***


**QUESTÃO 15**   
A diretiva #include é um comando que inclui arquivos (como por exemplo os do tipo Header), antes que o compilador faça a leitura e compilação do código-fonte. Desta forma:   

(C) Uma diretiva especial para o pré-processador C, executada antes da compilação.   
***
***


**QUESTÃO 16**   
Tendo em vista que a compilação do código e o pré-processamento do mesmo não estão exatamente na mesma etapa do código (como em uma cozinha profissional, o pré-processamento seria o 'mise en place', ato de separar cada utensílio e ingrediente, enquanto que o compilador funcionaria como o preparo do prato em si), eu diria que:   

(C) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).   
***
***


**QUESTÃO 17**   
As três primeiras possibilidades estão corretas, pois o compilador C interpreta espaços entre parênteses e funções como espaços em branco sem valor definido. Todavia, destas mencionadas, apenas a terceira (C) segue os padrões de boa escrita de código-fonte e formatação usada por programadores. A quarta possibilidade (D) contém erros de sintaxe, pois foram removidas partes cruciais das instruções, gerando erro de compilação.   
