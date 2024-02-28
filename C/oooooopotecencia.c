#include <stdio.h>

int potencia(int a, int b) {
    int resultado = 1;
    for (int i = 0; i < b; i++) {
        resultado *= a;
    }
    return resultado;
}

int main(void) {
    printf("%d\n", potencia(3, 3));
    return 0;
}