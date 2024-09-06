#include <stdio.h>

int main(void) {
    int counter = 1;
    int sum = 0;
    
    while (counter <=10) {
        sum = sum + counter;
        counter = counter + 1;
    }
    
    printf("The sum is %d.\n", sum);
}