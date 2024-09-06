#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(0));
    int n = 10;
    
    //even if you do multiple iterations then you will always get 1804289383
    while (n-- >= 0) {
        int i = rand() % 100;
        //unless you add the % 6 to it
        printf("%d\n", i);
    }

    
    return 0;
}