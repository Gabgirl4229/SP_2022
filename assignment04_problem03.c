#include <stdio.h>

int main(void) {
    //creates variables for income, age, and tax information
    int income, age, taxRate, taxAmount, afterTaxIncome;

    //gets the user's input for annual income
    puts("Please enter your annual income: ");
    scanf("%d", &income);
    puts("Now, enter your age: ");
    scanf("%d", &age);

    //determines tax rate
    if (income <= 50000) {
        taxRate = 0;
    } else if (income > 50000 && income <= 100000) {
        taxRate = 7;
    } else {
        taxRate = 9;
    }

    //determines senior discount and tax amount
    if (taxRate != 0 && age >=60){
        taxAmount = income * taxRate / 100 - 335;
    } else {
        taxAmount = income * taxRate / 100;
    }


    afterTaxIncome = income - taxAmount;

    //Displays income, tax rate, tax amount, and remaining income
    printf("Your annual income this year was %d dollars.\n", income);

    //specifies tax reduction for seniors
    if (taxRate != 0 && age >= 60) {
        printf("Since you are a senior, that means you get a senior discount. Your tax rate of %d percent will be reduced by 335 dollars.\n", taxRate);
    } else {
        printf("Your tax rate this year is %d percent.\n", taxRate);
    }

    printf("The exact amount you will pay in taxes is %d.\n", taxAmount);
    printf("After paying taxes, your remaining income will be %d.\n", afterTaxIncome);
}