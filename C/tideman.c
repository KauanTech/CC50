#include <stdio.h>

typedef struct
{
    int BYTE[255];
}
BYTE;


typedef struct
{
    BYTE rbgtBlue;
    BYTE rgbtGreen;
    BYTE rgbtRed;
}
RGBTRIPLE;

int main(void) {

    int altura = 0;
    int largura = 0;

    printf("Qual e a altura? ");
    scanf("%i", &altura);

    printf("Qual e a largura? ");
    scanf("%i", &largura);

    for (int i = 0; i < altura; i++) {
        for (int l = 0; l < largura; l++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}

//Criar uma estrutura que consiga armazenar os rgb ( red, green, blue).

//De alguma forma criar uma estrutura que faça com que ao atribuir um numero especifico ao rgbtBlue, rgbtGreen ou rgbtRed. O numero atribuido faça a cor deles mudar também

//Maior problema serão as estruturas ainda pensando em como fazer aqui esta o primeiro rascunho Kauan do futuro...

//criar um tipo de loop que crie uma "imagem" com uma atura predominada ou talvez que o usuario queira (height, width).

//Objetivo final criar um programa que faça um filtro em imagens assim trocando suas cores para obterem efeitos especificos