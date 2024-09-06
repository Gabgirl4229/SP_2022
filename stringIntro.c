#include <stdio.h>

#define SIZE 20

void printString(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
}

int findSize(char str[]) {
    
}


int main(void) {
    char str[SIZE] = "qwerty";

    printf("%s\n", str);
    printString(str);
    

    char temp = str[0]; // assigns 'q' to temp
    str[0] = str[1]; //wwerty
    str[1] = temp; //wqerty

    
    return 0;
}