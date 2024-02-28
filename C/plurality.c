#include <stdio.h>

int main(void) {
    char candidato1[100];
    int count = 0;
    char candidato2[100];
    int contador = 0;
    char resposta[100];
    int Nvote = 0;
    int i = 0;

    printf("Candidato 1: ");
    scanf("%s", candidato1);
    printf("Candidato 2: ");
    scanf("%s", candidato2);
    printf("Quantos irão votar? ");
    scanf("%i", &Nvote);
    
    while (i < Nvote) {
        printf("Vote: ");
        scanf("%s", resposta);
        if(resposta[0] == candidato1[0]) {
            count++;
            i++;
        } else if (resposta[0] == candidato2[0]) {
            contador++;
            i++;
        } else {
            printf("Voto Inválido");
            i++;        
        }
    }
    if (count > contador) {
            printf("Winner: %s", candidato1);
        } else {
            printf("Winner: %s", candidato2);
        }
    }