#include <stdio.h>

int main() {
    int firstNumber;
    int secondNumber;
    int sum;

    //printf method
    printf("Enter the first number:\n");
    scanf("%d", &firstNumber);

    //puts method
    puts("Enter the second number:");
    scanf("%d", &secondNumber);

    sum = firstNumber + secondNumber;

    printf("The sum of %d and %d is %d\n", firstNumber, secondNumber, sum);

}