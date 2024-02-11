#include <stdio.h>
#include <string.h>

int main(void) {
    int key;
    char plaintext[10000];
    char ciphertext[10000];

    do {
        printf("Key: ");
        scanf("%i", &key);   
    } while (key < 1 || key > 26);

    printf("plaintext: ");
    scanf(" %s", plaintext);

    int comprimentotext = strlen(plaintext);

    for (int i = 0; i < comprimentotext; i++) {
        char atual = plaintext[i];

        if ('a' <= atual && atual <= 'z') {
            ciphertext[i] = 'a' + (atual - 'a' + key) % 26;
        } else if ('A' <= atual && atual <= 'Z') {
            ciphertext[i] = 'A' + (atual - 'A' + key) % 26;
        } else {
            // Se não for uma letra, mantenha inalterado
            ciphertext[i] = atual;
        }
    }

    // Adicione o caractere nulo para formar uma string válida
    ciphertext[comprimentotext] = '\0';

    // Mostra a string cifrada
    printf("Ciphertext: %s\n", ciphertext);

    return 0;
}

/*
crie variaveis: key, text and ciphertext.

Peça uma chave de codificação ao usuario
guarde o valor

Peça um texto ao usuario
guarde o texto

armazene esse texto em algum lugar para usa-lo depois

transforme esse texto em ciphertext (resumindo codifique-o)

provavelmente estrutura for

pegue o texto e faça com que ele receba algo como "texto + key" para assim codifica-lo

e o retorne ao usuario o texto codificado.
*/