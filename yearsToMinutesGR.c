#include <stdio.h>

int main(void) {
  
    //I am going to be so extra about this

    /*
    print the prompt to enter the amount of years
    get the number of years
    calculate the number of minutes (assume 1 year is 365 days)
    print the result in the format XX years is XX minutes
    */

    int ageYears;
    int daysInYear = 365;
    int hoursInDay = 24;
    int minutesInHour = 60;
    int ageMinutes;

    printf("Welcome to the Age in Minutes calculator!\n");
    puts("What is your current age (in years)? ");
    scanf("%d", &ageYears);

    //1 year is 365 days, 1 day is 24 hours, 1 hour is 60 minutes

    ageMinutes = ageYears * daysInYear * hoursInDay * minutesInHour;

    printf("%d years is equal to %d minutes!\n", ageYears, ageMinutes);


}