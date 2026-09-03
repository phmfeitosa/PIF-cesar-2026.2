#include <stdio.h>

int main() {
    float ladoQuadrado, baseRetangulo, alturaRetangulo, baseTriangulo, alturaTriangulo;

    printf("Informe o valor do LADO DO QUADRADO com ponto flutuante: ");
    scanf("%f", &ladoQuadrado);
    printf("Informe o valor do BASE DO RETÂNGULO com ponto flutuante: ");
    scanf("%f", &baseRetangulo);
    printf("Informe o valor do ALTURA DO RETÂNGULO com ponto flutuante: ");
    scanf("%f", &alturaRetangulo);
    printf("Informe o valor do BASE DO TRIÂNGULO com ponto flutuante: ");
    scanf("%f", &baseTriangulo);
    printf("Informe o valor do ALTURA DO TRIÂNGULO com ponto flutuante: ");
    scanf("%f", &alturaTriangulo);

    printf("ÁREA DO QUADRADO: %.2f\n", ladoQuadrado * ladoQuadrado);
    printf("ÁREA DO RETÂNGULO: %.2f\n", baseRetangulo * alturaRetangulo);
    printf("ÁREA DO TRIÂNGULO: %.2f\n", baseTriangulo * alturaTriangulo / 3);

    return 0;
}