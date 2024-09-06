#include <stdio.h>

int main(void) {
    int firstNumber;
    int secondNumber;
    int minusThree;

    puts("Enter two integers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    minusThree = secondNumber - 3;

    if (secondNumber == 0) {
        printf("There is no solution when %d is divided by %d.\n", firstNumber, secondNumber);
    } else if (minusThree == 0) {
        printf("There is no solution when %d is divided by %d.\n", firstNumber, minusThree);
    }

    //whaaat is going ON
    if ((firstNumber % secondNumber == 0) && (firstNumber % (secondNumber - 3) == 0)) {
        printf("%d is divisible by %d and %d.\n", firstNumber, secondNumber, minusThree);
    } else if ((firstNumber % secondNumber == 0) || (firstNumber % (secondNumber - 3) == 0)) {
        printf("%d is divisible by either %d or %d.\n", firstNumber, secondNumber, minusThree);  
    } else if ((firstNumber % secondNumber != 0) && (firstNumber % (secondNumber - 3) != 0)) {
        printf("%d is not divisible by %d and not divisible by %d.\n", firstNumber, secondNumber, minusThree);
    } else if ((firstNumber % secondNumber != 0) || (firstNumber % (secondNumber - 3) != 0)) {
        printf("%d is not divisible by either %d or %d.\n", firstNumber, secondNumber, minusThree);
    }
}