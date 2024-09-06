#include <stdio.h>

int power(int base, int exponent);

int main(void) {
/*if you wanna customize the system:
int m, n;

    puts("Enter a number for the base and a number for the exponent.");
    scanf("%d %d", &m, &n);

    printf("%d to the power of %d is %d.\n", m, n, power(m, n));
*/
    
    printf("%d to the power of %d is %d.\n", 2, 3, power(2, 3));

    return 0;
}

int power(int base, int exponent) {
    //base case
    if (exponent == 0) {
        return 1;
    //recursive case
    } else {
        int result = base * power(base, exponent - 1);
        return result;
    }
}