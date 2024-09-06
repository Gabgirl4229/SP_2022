#include <stdio.h>

int main(void) {

    int num, sum;

    //let's make an infinite loop
    /*
    while (1 == 1) {

    }
    */



    for ( ; ; ) {
        puts("Enter the number (-1 to exit)");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (num > 100 || num < 100) {
            continue;
        }
        sum += num;
    }

    printf("The sum is %d\n", sum);
    
    return 0;
}