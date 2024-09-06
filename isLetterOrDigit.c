#include <stdio.h>

int main() {
    char ch;

    puts("Enter the character: ");
    scanf("%c", &ch);

    //is the given character a lowercase letter?
    if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } 
    //is the given character a digit?
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a number.\n", ch);
    }
}