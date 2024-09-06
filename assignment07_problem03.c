#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function prototypes
void print(int arr[], size_t arrSize);
void doubleEvenElements(int arr[], size_t arrSize);

int main(void) {
    //creates an integer array with 25 elements
    int arr[25];

    //allows RNG to happen properly
    srand(time(0));

    //initializes them
    for (int i = 0; i < 25; i++) {
        //generates a random number from -100 to 100
        arr[i] = rand()%201 - 100;
    }

    //calls print frunction
    print(arr, 25);

    //calls double function
    doubleEvenElements(arr, 25);
    
}

void print(int arr[], size_t arrSize) {

    //creates titles for the columns
    printf("Element     Value\n");

    //starts at the 5th element (i = 4) and increases by 5
    for (int i = 4; i < arrSize; i += 5) {
        //will print the nth element (n - 1) as n, and print its array value
        printf("%-12d%-7d\n", i + 1, arr[i]);
    }
}

void doubleEvenElements(int arr[], size_t arrSize){
    
    //does a linear search
    for (int i = 0; i < arrSize; i++) {
        //checks if the value is even
        if (arr[i]%2 == 0) {
            //doubles it
            arr[i]*=2;
        }
    }
}