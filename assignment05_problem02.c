#include <stdio.h>

int main(void) {
    //creates variable n for the input
    int n; 
    int sum = 0;

    //asks the user to enter a number
    puts("Enter a positive whole number: ");
    scanf("%d", &n);

    //creates placeholder variable i and makes a for loop
    //the variable starts at 0, increasing by 5 until i reaches n
    for (int i = 0; i <= n; i +=5) {
        sum += i;
    }

    //prints the sum
    printf("The sum is: %d.\n", sum);
}