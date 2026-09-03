#include <stdio.h>

int main() {
    float comprimento, largura, arame;

    printf("Informe o COMPRIMENTO do terreno em METROS: ");
    scanf("%f", &comprimento);
    printf("Informe a LARGURA do terreno em METROS: ");
    scanf("%f", &largura);
    printf("Informe o VALOR do arame farpado em REAIS: ");
    scanf("%f", &arame);

    printf("Custo total do cercamento com arame: R$%.2f", largura * comprimento * arame * 3);
}