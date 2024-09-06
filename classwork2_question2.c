#include <stdio.h>

int main(void) {
    //creates a variable for the number to count down from
    int counter;

    //asks the user to enter a number greater than 1
    puts("Please enter a whole number greater than 1.");
    scanf("%d", &counter);

    //prints the number given
    printf("\n%d\n", counter);

    //decreases the number by 1, then prints it (stops at 1)
    while (counter > 1) {
        counter -= 1;
        printf("%d\n", counter);
    }
}