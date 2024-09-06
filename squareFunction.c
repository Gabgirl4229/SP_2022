#include <stdio.h>

void square(int* nPtr) {
    printf("The address of n in square is %p.\n", nPtr);
    int value = *nPtr;
    *nPtr = value * value;
}

int main(void) {
    int n = 17;
    
    printf("The address of n in main is %p.\n", &n);
    square(&n);
    
    return 0;
}