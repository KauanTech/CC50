#include <stdio.h>
#include <string.h>

int main(void) {
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char text1[126];
    char text2[126];
    int newvalue1 = 0;
    int newvalue2 = 0;

    printf("Player 1: ");
    scanf("%s", text1);
    printf("Player 2: ");
    scanf("%s", text2);

    for (int i = 0; i < strlen(text1); i++) {
        char letra = text1[i];
        if (letra >= 'a' && letra <= 'z') { // Verifica se é uma letra minúscula
            int indice = letra - 'a'; // Converte a letra para um índice baseado no alfabeto ('a' == 0, 'b' == 1, etc.)
            newvalue1 += POINTS[indice]; // Adiciona a pontuação correspondente à letra ao total de pontos do jogador 1
        } else if (letra >= 'A' && letra <= 'Z') { // Verifica se é uma letra maiúscula
            int indice = letra - 'A'; // Converte a letra para um índice baseado no alfabeto ('A' == 0, 'B' == 1, etc.)
            newvalue1 += POINTS[indice]; // Adiciona a pontuação correspondente à letra ao total de pontos do jogador 1
        }
    }

    for (int i = 0; i < strlen(text2); i++) {
        char letra = text2[i];
        if (letra >= 'a' && letra <= 'z') { // Verifica se é uma letra minúscula
            int indice = letra - 'a'; // Converte a letra para um índice baseado no alfabeto ('a' == 0, 'b' == 1, etc.)
            newvalue2 += POINTS[indice]; // Adiciona a pontuação correspondente à letra ao total de pontos do jogador 2
        } else if (letra >= 'A' && letra <= 'Z') { // Verifica se é uma letra maiúscula
            int indice = letra - 'A'; // Converte a letra para um índice baseado no alfabeto ('A' == 0, 'B' == 1, etc.)
            newvalue2 += POINTS[indice]; // Adiciona a pontuação correspondente à letra ao total de pontos do jogador 2
        }
    }

    if (newvalue1 > newvalue2) {
        printf("Player 1 Wins\n");
    } else if (newvalue2 > newvalue1) {
        printf("Player 2 Wins\n");
    } else {
        printf("Tie\n");
    }
}