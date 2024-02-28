#include <stdio.h>
#include <string.h>

int main(void) {
    char candidato1[100];
    char candidato2[100];
    char candidato3[100];
    int Turnos;

    printf("Digite os nomes dos três candidatos: ");
    scanf("%s%s%s", candidato1, candidato2, candidato3);

    printf("Quantos turnos serão realizados? ");
    scanf("%d", &Turnos);

    int votos1 = 0, votos2 = 0, votos3 = 0;

    for (int i = 0; i < Turnos; i++) {
        char rank1[100];
        char rank2[100];
        char rank3[100];

        printf("Turno %d:\n", i + 1);
        printf("Rank 1: ");
        scanf("%s", rank1);
        printf("Rank 2: ");
        scanf("%s", rank2);
        printf("Rank 3: ");
        scanf("%s", rank3);

        if (strcmp(rank1, candidato1) == 0) 
            votos1++;
        else if (strcmp(rank1, candidato2) == 0) 
            votos2++;
        else if (strcmp(rank1, candidato3) == 0) 
            votos3++;

        if (strcmp(rank2, candidato1) == 0) 
            votos1++;
        else if (strcmp(rank2, candidato2) == 0) 
            votos2++;
        else if (strcmp(rank2, candidato3) == 0) 
            votos3++;

        if (strcmp(rank3, candidato1) == 0) 
            votos1++;
        else if (strcmp(rank3, candidato2) == 0) 
            votos2++;
        else if (strcmp(rank3, candidato3) == 0) 
            votos3++;
    }

    if (votos1 > votos2 && votos1 > votos3) 
        printf("%s venceu!\n", candidato1);
    else if (votos2 > votos1 && votos2 > votos3) 
        printf("%s venceu!\n", candidato2);
    else if (votos3 > votos1 && votos3 > votos2) 
        printf("%s venceu!\n", candidato3);
    else 
        printf("Houve um empate!\n");

    return 0;
}