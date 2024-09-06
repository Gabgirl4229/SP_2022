#include <stdio.h>

void two() {
    puts("two");
}

void one_three() {
    puts("one");
    two();
    puts("three");
}


int main() {
    puts("starting now:");
    one_three();
    puts("done!");
     
}
