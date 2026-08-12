/*
    CÓDIGO EXEMPLO DA QUESTÃO 06

*****
main()
{
    int a=1; b=2; c=3;
    printf("Os números são: %d %d %d\n", a, b, c, d);
    system("pause");
}
*****

No código acima, faltou a inclusão de ambas as bibliotecas: <stdio.h> e <stdlib.h>. 
Também faltou a colocação correta da função main() || int main ().
Separação incorreta das variáveis a, b e c, que deveriam ser separadas por vírgula e não por ponto e vírgula.
Adição de uma variável d no printf, que não foi declarada anteriormente.
Por fim o código exemplo não colocou o return 0; 
*********************************************************************************************

Código abaixo com a sintaxe correta.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1, b=2, c=3;
    printf("Os números são: %d %d %d\n", a, b, c);
    system("pause");
    return 0;
}