#include <stdio.h>

int main(void) {
    char ch;
    
    do {
        puts("Enter a singular character: ");
        //putting a space before the percent sign ignores white space characters (like Enter)
        scanf(" %c", &ch);

        switch(ch) {
            case 'A':
                puts("You entered A.");
                break;
            //if either of the two cases happens, it will say the same thing. This is because there is no break between them.
            case 'b':
            case 'B':
                puts("You entered B or b.");
                break;
            case 'C':
                puts("You entered C.");
                break;
            //if none of these are entered
            default:
                puts("There is no such option.");
                break;
        }
    } while (ch !='A');


    return 0;
}