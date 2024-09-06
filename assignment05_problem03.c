#include <stdio.h>

int main(void) {
    //creates variables for input (n), the sum, and a placeholder integer (i)
    int n, sum;
    int i = 0;

    //asks the user to enter a number (n)
    puts("Enter a positive whole number: ");
    scanf("%d", &n);

    //creates a do...while loop that increases i by 5 until it reaches n
    do {
        //for every iteration, i will be added to the sum and 5 will be added to i
        sum += i;
        i += 5;
    } while (i <= n);

    //Prints the total sum
    printf("The sum is %d.\n", sum);
}