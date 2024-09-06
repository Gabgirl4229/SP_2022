#include <stdio.h>

int main() {
    int xValue;
    int yValue;
    int zValue;
    
    printf("Enter your first integer value: \n");
    scanf("%d", &xValue);
    printf("x is equal to %d\n", xValue);

    printf("\nEnter your second integer value: \n");
    scanf("%d", &yValue);
    printf("y is equal to %d\n", xValue);

    printf("\nZ = 2x^2 + 3y\n");

    zValue = (2 * xValue * xValue) + (3 * yValue);

    printf("\nZ is equal to %d", zValue);

}