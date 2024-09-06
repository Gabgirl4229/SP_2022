#include <stdio.h>

int main(void) {
    //while loop
    int i = 0;

    while (i < 5) {
        i = i + 1;
    }

    //for loop based on while loop
    for (i = 0; i < 5; i++) {
        printf("yeet, %d!\n", i);
    }
}