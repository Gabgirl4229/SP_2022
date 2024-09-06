#include <stdio.h>

//calculate the product of numbers from 1 to 10
int main(void) {
    
    //while loop
    int counter = 1;
    long long int product = 1;

    while (counter <= 10) {
        
        product *= counter;
        counter++;
    }

    printf("The product is %lld\n", product);

    //for loop
    product = 1;
    for (int counter = 1; counter <= 10; counter++) {
        product *= counter;
    }

    printf("The product is %lld\n", product);
}