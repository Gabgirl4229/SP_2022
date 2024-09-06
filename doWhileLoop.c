#include <stdio.h>

int main(void) {
    int input;

    do {
        puts("Enter the number greater than 100: ");
        scanf("%d", &input);
    } while (input <= 100);
}