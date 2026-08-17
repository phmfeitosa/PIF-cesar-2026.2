#include <stdio.h>

int main() 
{
    /* Primeira Chamada */
    printf("Treino em Programação.\nLinguagem C.\n");
    
    /* Segunda Chamada */
    printf("Treino em Programação\n.");
    printf("Linguagem C.\n");

    /* Terceira Chamada */
    int supEsq = 0xC9, supDir = 0xBB, infEsq = 0xC8, infDir = 0xBC, linhaHor = 0xCD, linhaVer = 0xBA; 
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", supEsq, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, supDir);
    printf("%cTreino em Programação.%c\n%cLinguagem C.            %c\n", linhaVer, linhaVer, linhaVer, linhaVer);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", infEsq, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, linhaHor, infDir);
    return 0;
}

/* QUESTÃO DOS INFERNO.2 BIXO! */