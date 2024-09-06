#include <stdio.h>

int main() {
    int bodyNumber;
    int headNumber;

    puts("Enter the number for arrow body: ");
    scanf("%d", &bodyNumber);

    puts("Enter the number for arrow head: ");
    scanf("%d", &headNumber);

    printf("\t%d\n\t%d%d\n", headNumber, headNumber, headNumber);
    
    printf("%d%d%d%d%d%d%d\n", bodyNumber, bodyNumber, bodyNumber, bodyNumber, headNumber, headNumber, headNumber);
    
    printf("%d%d%d%d%d%d%d%d\n", bodyNumber, bodyNumber, bodyNumber, bodyNumber, headNumber, headNumber, headNumber, headNumber);
    
    printf("%d%d%d%d%d%d%d\n", bodyNumber, bodyNumber, bodyNumber, bodyNumber, headNumber, headNumber, headNumber);
    printf("\t%d%d\n\t%d\n", headNumber, headNumber, headNumber);

}