#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);

    // Loop para cada linha
    for (int i = 0; i <= n; i++) {
        // Espaços antes da primeira escada
        for (int j = 0; j < (n - i); j++) {
            printf(" ");
        }

        // Loop para a primeira escada
        for (int k = 0; k <= i; k++) {
            printf("#");
        }

        // Espaço entre as escadas
        printf("  ");

        // Loop para a segunda escada
        for (int l = 0; l <= i; l++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
