#include <stdio.h>
#include <ctype.h>

//function prototype for capitalization
void capitalizeWords(char str[]);

int main() {
    //initializes a filler string
    char str[80] = "test";

    //asks user to input a string, and scans until newline
    puts("Enter a string (all lowercase, no punctuation):");
    scanf("%[^\n]", str);

    //calls capitalizeWords with the char array str
    capitalizeWords(str);

    //prints the str array after capitalizing
    printf("%s\n", str);
}

void capitalizeWords(char str[]) {
    int i = 0;

    //for every character before the terminating null character
    while (str[i] != '\0') {
        //capitalizes the first letter
        if (i == 0) {
            str[i] = toupper(str[i]);
        //capitalizes the last letter
        } else if (str[i + 1] == '\0') {
            str[i] = toupper(str[i]);
        //capitalizes the letters before and after a space
        } else if (str[i] == ' ') {
            str[i - 1] = toupper(str[i - 1]);
            str[i + 1] = toupper(str[i + 1]);
        }
        i++;
    }
    
}