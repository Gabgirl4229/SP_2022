#include <stdio.h>

//function prototypes
void printReversed(float arr[], int size);
float sumFirstLast(float arr[], int size);

int main(void) {
    //creates a float array with 11 elements
    float a[11];
    
    //initializes the array
    a[0] = 1;
    for (int i = 0; i < 11; i++) {
        a[i+1] = a[i] + 0.1;
    }

    //calls printReversed to print the arrays
    printReversed(a, 11);

    //calls sumFirstLast to print the sum
    printf("\nThe sum of the first and last elements is %.1f.\n", sumFirstLast(a, 11));
}

void printReversed(float arr[], int size) {

    //prints forward
    printf("\nElements of the array are: \n");
    for (int i = 0; i < size; i++) {
        printf("%.1f\n", arr[i]);
    }

    //prints backwards
    printf("\nElements of the array in the reversed order are: \n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%.1f\n", arr[i]);
    }

    return;
}

float sumFirstLast (float arr[], int size) {
    //since the array is already initialized, we can just use the first (0) and last (size - 1) values in it
    float sum = arr[0] + arr[size - 1];
    return sum;
}