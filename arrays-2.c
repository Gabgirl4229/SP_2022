#include <stdio.h>

//function prototype
void printArray(int arr[], int size);


//symbolic constant
#define SIZE 30

int main() {
    int a[SIZE];

    //initialize an array
    for (int i = 0; i < SIZE; i++) {
        a[i] = 100;
    }

    //calls print function
    printArray(a, SIZE);

    return 0;
}

void printArray(int arr[], int size) {

    puts("Index:\t\t\tValue\t\t\t\n");
    
    //print an array
    for (int i = 0; i < size; i++) {
        printf("%7d%13d\n", i, arr[i]);
    }
}
