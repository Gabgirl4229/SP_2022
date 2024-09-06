#include <stdio.h>
#include <ctype.h>



int main(void) {
char c;

    puts("Enter the character");
    scanf("%c", &c);

    printf("isblank('%c') = %d\n", c, isblank(c));
    printf("isdigit('%c') = %d\n", c, isdigit(c));
    printf("isalpha('%c') = %d\n", c, isalpha(c));
    printf("isalnum('%c') = %d\n", c, isalnum(c));
    printf("isupper('%c') = %d\n", c, isupper(c));
    printf("islower('%c') = %d\n", c, islower(c));
    printf("toupper('%c') = %c\n", c, toupper(c));
    printf("tolower('%c') = %c\n", c, tolower(c));
    

    return 0;
}