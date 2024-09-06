#include <stdio.h>

int main() {
    //creates a product number variable and a retail value variable
    int product;
    float value = 0;

    //explains the rules
    printf("Enter any product numbers (1-5) below to get their retail prices.\nEnter -1 to end the input.\n\n");

    //asks the user to enter a series of product numbers
    do {
    puts("Enter a product number: ");
    scanf("%d", &product);

        //adds a given price to the total value for each product number added
        switch (product) {
            case 1:
                value += 2.98;
                break;
            case 2:
                value += 4.50;
                break;
            case 3:
                value += 9.98;
                break;
            case 4:
                value += 4.49;
                break;
            case 5:
                value += 6.87;
                break;
            //does nothing (but is still needed, otherwise it'll say -1 is "invalid") when it's not
            case -1:
                break;
            //tells the user that they have entered an invalid product code
            default:
                printf("Invalid product code: %d.\n", product);
                break;  
        }

    //escapes the sequence when -1 is entered
    } while (product != -1);

    printf("The total retail value is: $%.2f.\n", value);
    
}