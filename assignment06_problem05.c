#include <stdio.h>
#include <math.h>

//function prototypes for discriminant and root
void discriminant (int a, int b, int c);
void root(int a, int b, int c, int discriminant);

int main(void) {
//creates variables for coefficients a, b, and c
int a, b, c;

    //asks the user to input 3 numbers and scans them
    printf("Enter the coefficients in your quadratic equation:\n");
    puts("a: ");
    puts("b: ");
    puts("c: ");
    scanf("%d %d %d", &a, &b, &c);

    //calls the discriminant function using the 3 numbers
    discriminant(a,b,c);

    
}

void discriminant (int a, int b, int c) {
    //calculates the discriminant: b^2 - 4ac
    int discriminant = pow(b,2) - 4*a*c;

    //if the discriminant is greater than zero, call root (to calculate the rest of the quadratic equation)
    if (discriminant > 0) {
        root(a, b, c, discriminant);
    
    //if the discriminant is zero, calculate the one root now
    } else if (discriminant == 0) {
        int root = -b / (2*a);
        printf("The root is %d", root);
    //if the discriminant is less than zero, it is impossible to calculate (because of the negative inside a square root)
    } else {
        printf("There are no real roots for this equation.");
    }

    //returns to main
    return;
}

void root (int a, int b, int c, int discriminant) {
    //calculates two roots using the discriminant
    int root1 = (-b + sqrt(discriminant))/(2*a);
    int root2 = (-b - sqrt(discriminant))/(2*a);

    //prints the two roots
    printf("The two roots for this equation are: \n");
    printf("%d and %d", root1, root2);

}