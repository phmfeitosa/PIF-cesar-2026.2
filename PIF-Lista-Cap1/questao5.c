/* 
CÓDIGO EXEMPLO DA QUESTÃO 05

*****
main()
{
    printf("Linguagem C");
    system("pause");
}
*****


No código acima, faltou a inclusão de ambas as bibliotecas: <stdio.h> e <stdlib.h>. 
Também faltou a colocação correta da função main() || int main ().
Por fim o código exemplo não colocou o return 0; 
*********************************************************************************************

Código abaixo com a sintaxe correta.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("Linguagem C");
    system("pause");
    return 0;
}