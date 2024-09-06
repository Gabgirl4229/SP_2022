#include <stdio.h>

int main() {
    int firstNumber = 304; //creates a variable called "firstNumber" of type int (integer)
    int secondNumber = 345; //gives the number a value as soon as you create it
    int sum = 0; //easter alternative: int sum; this is because the value changes in the next line

    sum = firstNumber + secondNumber;

    printf("The first number is %d.\n", firstNumber);

    printf("The second number is %d.\n", secondNumber);
    // %d = conversion specifier; "d" stands for decimal
    
    /*
    NOTE: "d" is assigned as variable "secondNumber," so %d\n means
    
    "is 100
    "
    
    not
    
    "is
    100"
    
    */

    printf("The sum of %d and %d is %d.\n", firstNumber, secondNumber, sum);
}