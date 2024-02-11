#include <stdio.h>
#include <string.h>

int main(void) {
    char key[26];
    char text[100000];
    char encryptedText[100000];

    printf("Digite a ordem desejada para codificação: ");
    scanf("%s", key);

    printf("Texto a ser codificado: ");
    scanf("%s", text);

    int comprimento = strlen(text);

    for (int i = 0; i < comprimento; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            encryptedText[i] = key[text[i] - 'A'];
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            encryptedText[i] = key[text[i] - 'a'] + 'a' - 'A';
        } else {
            encryptedText[i] = text[i];
        }
    }

    encryptedText[comprimento] = '\0';  // Adiciona o caractere nulo para indicar o final da string

    printf("Texto codificado: %s\n", encryptedText);

    return 0;
}
