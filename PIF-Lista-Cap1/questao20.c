#include <stdio.h>

int main() 
{
    int supEsq = 0xC9, supDir = 0xBB, infEsq = 0xC8, infDir = 0xBC, linhaHor = 0xCD, linhaVer = 0xBA; 
    printf("%c%c%c%c\n", supEsq, linhaHor, linhaHor, supDir);
    printf("%c  %c\n", linhaVer, linhaVer);
    printf("%c  %c\n", linhaVer, linhaVer);
    printf("%c%c%c%c\n", infEsq, linhaHor, linhaHor, infDir);
    return 0;
}


/* QUESTÃO DOS INFERNO BIXO! */