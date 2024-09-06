#include <stdio.h>

//function prototypes (so they can be placed below main)
double f(double x);
double partOne(double n);
double partTwo(double x, double n);
double partThree(double n, double y);


int main(void) {
//creates variable x and asks user to enter it
double x;

    //sentinel-controlled loop, will repeat (call itself) until the user enters -1
    puts("Enter a decimal number for x (type -1 to end function):");
    scanf("%lf", &x);

    if (x == -1) {
        return 0;
    } else {
    //prints "f(x) = answer", calling double f(double x) to get the answer
    printf("\nf(%.1lf) = %lf\n\n", x, f(x));
    main();
    }
}


double f (double x) {
//creates three empty variables for each part of the equation, and f for the answer
double one, two, three, f = 0;

    //calculates each part of the equation from n = 1 to n = 20
    for (int n = 1; n <= 20; n++) {
        //(-1)^(n+1)
        one = partOne(n + 1);
        //x^n
        two = partTwo(x, n);
        //x^n / n --> part three takes the answer from part two and jsut divides
        three = partThree(n, two);

        //adds the answer for part 1 & 3 to f, with every iteration from n=1 to n=20
        f += (one * three);
    }

    //sends f back to main
    return f;
    
}


double partOne (double n){
double resultOne;

    //multiplies -1 by itself (by calling its own function) until it hits n = 0, then sends the result back to f
    if (n == 0) {
    return 1;
    } else {
    resultOne = -1 * partOne(n-1);
    return resultOne;
    }
}


double partTwo (double x, double n) {

    //does the same thing as part one, except the base is now x instead of -1
    if (n == 0) {
    return 1;
    } else {
    double resultTwo = x * partTwo(x, n-1);
    return resultTwo;
    }
    
}


double partThree (double n, double y) {
    //takes the result of part two, then divides it by n
    double resultThree = y/n;
    return resultThree;
}