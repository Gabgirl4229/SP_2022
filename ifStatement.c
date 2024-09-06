#include <stdio.h>

int main() {
    int num1, num2;

    //get the first number
    puts("Enter the first number: ");
    scanf("%d", &num1);

    //get the second number
    puts("Enter the second number: ");
    scanf("%d", &num2);

    //if the first number is greater than the second
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    }

    //if the first number is greater than the second
    else if (num2 > num1) {
        printf("%d is greater than %d\n", num2, num1);
    }

    //if the first number is greater than the second
    else if (num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    }

}