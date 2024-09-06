#include <stdio.h>

int largest(int num1, int num2, int num3) {
    int smallest, middle, largest;
    
    if (num1 < num2) {
        if (num1 < num3) {
            smallest = num1;
            if (num3 < num2) {
                middle = num3;
                largest = num2;
            } else {
                middle = num2;
                largest = num3;
            }
        } else if (num1 > num3) {
            smallest = num3;
            middle = num1;
            largest = num2;
        }    
    } else if (num1 > num2) {
        if (num1 < num3) {
            smallest = num1;
            if (num3 < num2) {
                middle = num3;
                largest = num2;
            } else {
                middle = num2;
                largest = num3;
            }
        } else if (num1 > num3) {
            smallest = num3;
            middle = num1;
            largest = num2;
        } 
    }

    
}

int main(void) {
    int a, b, c;

    puts("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    largest(a,b,c);
}