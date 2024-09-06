#include <stdio.h>

int main(void) {
    int seconds;
    int minutes;
    int hours;
    int remainingSeconds;
    int remainingMinutes;

    //getting seconds form the user
    puts("Enter the number of seconds:");
    scanf("%d", &seconds);

    minutes = seconds / 60; //integer amount of minutes

    remainingSeconds = seconds % 60;

    hours = minutes / 60;

    remainingMinutes = minutes % 60;

    minutes = minutes + remainingMinutes;

    printf("%d seconds is ", seconds);
    printf("%d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);

}