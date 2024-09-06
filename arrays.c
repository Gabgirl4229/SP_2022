#include <stdio.h>

int main(void) {
    int arr[10];
    int n[6] = {32, 27, 64, 18, 95, 14};


    int temp = 10;
    for (int i = 0; i < 10; i++) {
        arr[i] = temp;
        temp += 10;
        printf("%d\n", arr[i]);
    }

    
}