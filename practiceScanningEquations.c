#include <stdio.h>

int main(void) {
    int a, b, c, d;
    
    puts("Enter the quadratic equation (in form a = input, b = input, etc.): ");
    //scanf("a = %d, b = %d, c = %d, d = %d", &a, &b, &c, &d);
    scanf("%*c %*c %d%*c %*c %*c %d%*c %*c %*c %d%*c %*c %*c %d", &a, &b, &c, &d);

    printf("Completed Equation: %dx^%d + %dx + %d\n", a, b, c, d);
}