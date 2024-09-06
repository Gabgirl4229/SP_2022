#include <stdio.h>

void f1(int number) {
    printf("The number is %d\n", number);
    //you can use return; to end the function
}

int f2(int number) {
    //if a function is non-void, it must return something
    return number * 5;
}

void printNumbers (int n) {
    if (n >= 100) {
        return;
    }
    printf("%d\n", n);
    n++;
    printNumbers(n);
}

int main() {
int a = 10;
int b = 5;
    
    f1(a + b);

    printNumbers(10);
    
    return 0;
}