#include <stdio.h>

//function prototype
int sumOfRange(int start, int end);

int main(void) {
//creates variables for start and end of range
int start, end;
    //asks user to input these values and scans them
    puts("Enter the start of the range: ");
    scanf("%d", &start);

    puts("Enter the end of the range: ");
    scanf("%d", &end);

    //prints out the result by calling sumOfRange with start and end
    printf("The sum of all numbers from %d to %d is %d.\n", start, end, sumOfRange(start, end));
    
}

int sumOfRange (int start, int end) {
    //The sum must stop adding when start is greater than end
    if (start > end) {
        return 0; 
    } else{
        //recursive function calls itself until start > end
        int sum = start + sumOfRange(start + 1, end);
        return sum;
    }
    
}