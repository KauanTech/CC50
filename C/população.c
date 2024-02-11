#include <stdio.h>

int main(void) {
    int inip = 0;
    int fimp = 0;
    int contador = 0;
    if (inip == 0 || fimp == 0) {
    printf("Digite o o numero inicial da população: ");
    scanf("%i", &inip);

    printf("Digite um numero final da população: ");
    scanf("%i", &fimp);
    }

    while (inip < fimp) {
        inip = inip + inip / 3 - inip / 4;
        contador++;
    }
    return printf("A população chegara nessa quantidade de habitantes em: %i", contador);
}