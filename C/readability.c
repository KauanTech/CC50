#include <stdio.h>

int main(void) {
    char resposta[100000];
    int i;
    float letras = 0;
    float palavras = 0;
    float sentencas = 0;

    // Solicita ao usuário que insira um texto
    printf("Texto: ");
    fgets(resposta, sizeof(resposta), stdin);

    // Loop para percorrer cada caractere do texto
    for (i = 0; resposta[i] != '\0'; i++) {
        // Verifica se é um caractere alfabético (letra)
        if ((resposta[i] >= 'a' && resposta[i] <= 'z') || (resposta[i] >= 'A' && resposta[i] <= 'Z')) {
            letras++;
        }

        // Verifica se é um espaço, nova linha ou retorno de carro
        if (resposta[i] == ' ' || resposta[i] == '\n' || resposta[i] == '\r') {
            palavras++;
        }

        // Verifica se o caractere é um ponto de exclamação, ponto final ou ponto de interrogação
        if (resposta[i] == '.' || resposta[i] == '!' || resposta[i] == '?') {
            sentencas++;
        }
    }

    // Verifica se há pelo menos uma palavra antes de calcular médias e aplicar a fórmula
    if (palavras > 0) {
        // Calcula as médias e aplica a fórmula Coleman-Liau
        float mediaL = (letras / palavras) * 100;
        float mediaS = (sentencas / palavras) * 100;
        float index = 0.0588 * mediaL - 0.296 * mediaS - 15.8;

        // Converte o resultado para uma pontuação aproximada
        int pontuacao = (int)(index + 0.5);  // Arredonda para o inteiro mais próximo

        // Exibe o resultado
        printf("Grade: %d\n", pontuacao);
    } else {
        // Se não houver palavras, imprime uma mensagem informando
        printf("Nenhuma palavra encontrada.\n");
    }

    return 0;
}