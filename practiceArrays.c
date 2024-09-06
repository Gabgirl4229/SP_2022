#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
srand(time(0));    
int arr[20];
    
    printf("Array 1: \n");
    for (int i = 0; i < 20; i++) {
        arr[i] = (rand() % 41) - 20;
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("Array 2: \n");
    for (int i = 0; i < 20; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
        printf("%d\t", arr[i]);
    }
}