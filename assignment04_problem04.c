#include <stdio.h>

int main(void) {
    int number;
    int n = 0;

    puts("Enter a positive whole number: ");
    scanf("%d", &number);

    while (n*n <= number) {
        n++;
    }

    printf("The smallest number \"n\" such that n^2 > %d is %d.\n", number, n);


}