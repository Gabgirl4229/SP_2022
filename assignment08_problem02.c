#include <stdio.h>
#include <ctype.h>

//defines a size to avoid "stack smashing" error 
#define SIZE 100

int main(void) {
//creates a test string
char str[SIZE] = "test";
//creates variables for upper, lower, digit, and whitespace characters
int upperCount = 0, lowerCount = 0, digitCount = 0, whiteSpaceCount = 0;

    //asks user to enter a string, then scans it
    puts("Enter a string:");
    //stops scanning when the user presses enter key
    scanf("%[^\n]s", str);

    //checks every value of the string before the null character
    //if the cases are true, will add one to the count
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]) != 0) {
            upperCount++;
        } else if (islower(str[i]) != 0) {
            lowerCount++;
        } else if (isdigit(str[i]) != 0) {
            digitCount++;
        } else if (isblank(str[i]) != 0) {
            whiteSpaceCount++;
        } else {
            continue;
        }
    }

    //prints results
    printf("Number of uppercase letters: %d\n", upperCount);
    printf("Number of lowercase letters: %d\n", lowerCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Number of whitespace characters: %d\n", whiteSpaceCount);
}