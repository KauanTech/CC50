#include <stdio.h>

int main(void) {
    // moedas disponíveis para troco
    int vintecinco, dez, cinco, um;
    float valortot;

    printf("Digite o valor da compra: ");
    scanf("%f", &valortot);

    int trocoCentavos = valortot * 100;  // Converter o valor para centavos para evitar problemas com ponto flutuante

    vintecinco = trocoCentavos / 25;
    trocoCentavos %= 25;

    dez = trocoCentavos / 10;
    trocoCentavos %= 10;

    cinco = trocoCentavos / 5;
    trocoCentavos %= 5;

    um = trocoCentavos;

    printf("O total de moedas necessárias foram: 25: %d, 10: %d, 5: %d, 1: %d\n", vintecinco, dez, cinco, um);

    return 0;
}