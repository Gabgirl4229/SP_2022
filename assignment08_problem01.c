#include <stdio.h>

int main() {
//creates integers for hours, minutes, and seconds
int hh, mm, ss;

    //gives instructions to the user
    printf("Enter a time in any way you want, so long\nas there is one character in between\nthe hours, minutes, and seconds.\n");
    //lists off homework examples as formatting ideas
    printf("Examples:\thh:mm:ss\thh,mm,ss\thh mm ss\n\n");

    printf("Time:\t");
    //scans the three integers (with a limit of two digits) and ignores characters in between
    scanf("%2d%*c%2d%*c%2d", &hh, &mm, &ss);

    //prints the scanned values
    printf("\nHours: %d    Minutes: %d    Seconds: %d\n", hh, mm, ss);
}