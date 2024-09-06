#include <stdio.h>


void setToZero (int* a);

int main(void) {
    int a = 19483 * 3;
    a %= 2;
    a++;

    setToZero(&a);
    printf("The value of a is %d\n", a);

    return 0;
}

void setToZero (int* a) {
    *a = 0;
}