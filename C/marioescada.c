#include <stdio.h>

void main(void) {
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
          printf("#");
        }
        printf("\n");
    }
}