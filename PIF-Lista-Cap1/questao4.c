/* CÓDIGO EXEMPLO DA QUESTÃO 04
*****
#include <stdio.h> (sem erros)
#include <stdlib.h>; (colocou ; após o >)

int main{}(inverteu o uso de {} e () na função main)
(
    printf( Existem %d semanas no ano.,52); (faltou colocar aspas duplas no texto e colocar o ; no final)
    cout << endl; (utilizou cout, usado em C++, ao invés de printf, típico de linguagem C)
    system("PAUSE"); (usou "PAUSE" em vez de "pause")
    return 0;
)
*****


Na inclusão das bibliotecas, o código exemplo da questão 04 colocou um ; após o > da biblioteca <stdlib.h>, o que é incorreto.
Na função main, o código exemplo da questão 04 inverteu o uso de {} e () na função main, o que é incorreto.
No printf, o código exemplo da questão 04 não colocou aspas duplas no texto e não colocou o ; no final, o que é incorreto.
O código exemplo da questão 04 utilizou cout, que é usado em C++, ao invés de printf, que é típico da linguagem C, o que é incorreto.
No system, o código exemplo da questão 04 usou "PAUSE" em vez de "pause", o que é incorreto.
***********************************************************************************************************************************

Código abaixo com a sintaxe correta.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("Existem %d semanas em um ano.\n", 52);
    system("pause");
    return 0;
}