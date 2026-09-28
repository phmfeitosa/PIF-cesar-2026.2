#include <stdio.h>

int main() {
    int primeiro, segundo;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro);
    printf("Digite o segundo numero: ");
    scanf("%d", &segundo);

    if (primeiro <= segundo) {
        for (int i = primeiro; i <= segundo; i++) {
            printf("%d\t", i);
        }
    } else {
        for (int i = primeiro; i >= segundo; i--) {
            printf("%d\t", i);
        }
    }
    return 0;
}