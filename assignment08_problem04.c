#include <stdio.h>

//defines initial size
#define SIZE 100

//function prototype (with string parameter)
size_t stringLengthIndex(const char s[]); 

int main() {
char str[SIZE];

    //asks user to enter a string and scans it
    puts("Enter a string:");
    scanf("%[^\n]s", str);

    //calls stringLengthIndex to get the string length
    size_t size = stringLengthIndex(str);

    //prints new size
    printf("String Length: %zu", size);
}

size_t stringLengthIndex(const char s[]) {
size_t i = 0;

    //counts how many letters are in the string (not including null)
    while (s[i] != '\0') {
        i++;
    }
    //adds one number for the null character
    i++;

    return i;
}