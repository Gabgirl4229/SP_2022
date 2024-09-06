#include <stdio.h>

int main(void) {
    char str[49];
    
    printf("Enter a string: \t");
    scanf("%48[^.]", str);

    printf("You entered: %s", str);
}