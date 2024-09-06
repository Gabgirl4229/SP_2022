#include <stdio.h>

int x = 10; //global variable


void foo(); //function prototype
int addOne(int n);
int addOneStatic(int n);

int main(void) {
    /*
    printf("%d\n", x); //file scope

    int x = 100; //block scope - smaller scopes take more precedence
    printf("%d\n", x);

    for (int x = 0; x < 10; x++) { // 
        printf("%d\n", x);
    }
    
    foo();
    */

    for (int i = 0; i < 10; i++) {
        printf("AddOne returns %d.\n", addOne(i));
        printf("AddOneStatic returns %d.\n", addOneStatic(i));
    }
    
    return 0;
}

void foo() {
    printf("%d\n", x);
}

int addOne (int n) {
    int result = 1;
    result += n;
    return result;
}

int addOneStatic (int n) {
    static int result = 1; //creates a static variable
    result += n;
    return result;
}