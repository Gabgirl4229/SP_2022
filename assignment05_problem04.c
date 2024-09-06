#include <stdio.h>

int main () {
    //creates a variable i for the number that is being printed
    //creates a variable t to track how many numbers have been printed
    int i;
    int t = 1;

    //creates a for loop that starts from 1 to 101 and increases by 1 every iteration
    for(i = 1; i < 101; i++) {

        //prints only if the number is even, otherwise it skips the iteration
        if (i % 2 == 0) {

            //if the number has printed 5 times, then the next number will print on a new line
            if (t == 5) {
            printf("%d\n", i);
            t = 1;
            
            //if the number has not printed 5 times yet, then if will print on the same line with a tab of space after it
            } else {
            printf("%d\t", i);
            t++;
            }
        }
        else {
            continue;
        }
    }
}