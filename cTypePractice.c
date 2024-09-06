#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isValidString(char str[]);

int main(void) {
char str[] = "HeLlO CoP2271!!!";
    char str2[] = "ojeiofjsej@lkj332H";

    //Check if the String is Valid
    printf("%s\n\n", (isValidString(str2)) ? "VALID" : "INVALID");

    
    //How to Print a String

    //1
    puts("Printing a string with a loop...");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n\n");

    //2
    puts("Printing a string with printf and %s...");
    printf("%s", str);
    printf("\n\n");

    //3
    puts("Printing a string with puts...");
    puts(str);
    puts("");

    //print in uppercase
    puts("Printing the string with a loop in uppercase...");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toupper(str[i]));
    }
    printf("\n\n");

    //print with inverted letters
    puts("Printing the string with inverted letters...");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]) == 0) {
            printf("%c", toupper(str[i]));
        } else {
            printf("%c", tolower(str[i]));
        }
    }
    printf("\n\n");
}

bool isValidString(char str[]) {
int result1 = 0;
int result2 = 0;
int result3 = 0;

    //check for an uppercase letter
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]) != 0) {
            result1 = 1;
            break;
        }
    }

    //check for a lowercase letter
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]) != 0) {
            result2 = 1;
            break;
        }
    }

    //check for a digit
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]) != 0) {
            result3 = 1;
            break;
        }
    }

    if (result1 == result2 == result3 && result1 != 0) {
        return 1;
    } else {
        return 0;
    }

    
}