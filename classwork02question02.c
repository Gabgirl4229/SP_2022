#include <stdio.h>

int main() {
    
    float salary, tax;

    puts("Enter your annual salary as a decimal amount: \n(Example: 100.00)\n");
    scanf("%f", &salary);

/*
    if (salary > 75000) {
        tax = salary - (salary * 0.8) / 1.1;
    }
    else if (salary <= 75000) {
        tax = salary - (salary * 1.7) / 2;
    }
*/

    tax = (salary <= 75000) ? salary - (salary * 1.7) / 2 : salary - (salary * 0.8) / 1.1;

    printf("Your taxes should be %.2f\n", tax);
}