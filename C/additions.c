#include <stdio.h>

int main(void) {
    int number1, number2;
    
    printf("Write a number: ");
    scanf("%i", &number1);
    
    printf("Write a second number: ");
    scanf("%i", &number2);
    
    int result = number1 + number2;

    printf("%i + %i = %i\n", number1, number2, result);

    return 0;
}