#include <stdio.h>
#include <stdbool.h>

bool containsA(char str[]);

int main() {

    char str[100] = "Hello world!";
    printf("%s\n", (containsA(str) == true) ? "TRUE" : "FALSE");
    return 0;
}

bool containsA(char str[]) {
    int i = 0;
    
    while(str[i] != '\0') {
        if (str[i] == 'A' || str[i] == 'a') {
            return true;
        }
        i++;
    }
    return false;
}