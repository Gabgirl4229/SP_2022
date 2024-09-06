#include <stdio.h>

void modifyArray(int arr[], int size);
int firstZero(const int arr[], int size);
int secondZero(const int arr[], int size);
int lastZero(const int arr[], int size);

int main(void) {
    int a[] = {1, 2, 0, 3, 0, 4, 0, 5};

    /*
    modifyArray(a, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d  ", a[i]);
    }
    */

    printf("The first zero has an index of %d\n", firstZero(a,8));
    printf("The second zero has an index of %d\n", secondZero(a,8));
    printf("The last zero has an index of %d\n", lastZero(a,8));
    
    return 0;
}

void modifyArray(int arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int firstZero(const int arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}

int secondZero(const int arr[], int size) {
int i = 0;
int time = 0;

    for (i = 0; i < size; i++) {
        if (arr[i] == 0) {
            time += 1;
        }

        if (time == 2) {
            return i;
        }
    }
    return -1;
}

int lastZero(const int arr[], int size) {
    
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}