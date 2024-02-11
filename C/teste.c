#include <stdio.h>

int swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("%i e %i", *a, *b);
}

int main(void) {
    int x = 1;
    int y = 2;
    swap(&x, &y);  
}