#include <stdio.h>

int main(void) {
    
    int nRows, nColumns;
    puts("Enter the  number of rows and number of columns.");
    scanf("%d%d", &nRows, &nColumns);


    for(int i = 0; i < nRows; i++) {

        for(int j = 0; j < nColumns; j++) {
            printf("%c", '*');

        }
        puts("");
    }
    return 0;
}