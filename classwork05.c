#include <stdio.h>

//symbolic constants for the array
#define ROWS 2
#define COLUMNS 4

//function prototypes
void printArray(float arr[][COLUMNS], int rows);
void changeArray(float arr[ROWS][COLUMNS], int row, int column);
float findSmallest (float arr[][COLUMNS], int rows);
float findAverage (float arr[][COLUMNS], int rows);

int main(void) {
//creates an array
float arr[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            //asks user to input a value for every element in the array, then scans it
            printf("Enter value #%d for row %d: \t", j + 1, i + 1);
            scanf("%f", &arr[i][j]);
        }
        printf("\n");
    }

    //calls printArray to print the values
    printf("\nArray before changes: ");
    printArray(arr, 2);

    //changes the array's first row and second column
    changeArray(arr, 0, 1);
    //changes the array's second row and third column
    changeArray(arr, 1, 2);

    //calls printArray again
    printf("\nArray after changes: ");
    printArray(arr, 2);

    //calls findSmallest, then prints the result
    printf("\n\nSmallest element: %.1f\n", findSmallest(arr, 2));

    //calls findAverage, then prints the result
    printf("\nAverage of all elements: %.1f\n", findAverage(arr, 2));
}

void printArray(float arr[][COLUMNS], int rows) {

    printf("\n");
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            //prints each value to one decimal point, with 5 spaces between each value
            printf("%-5.1f\t", arr[i][j]);
        }
        printf("\n");
    }
}

void changeArray(float arr[ROWS][COLUMNS], int row, int column) {
    //checks for the specific rows/columns required in the problem
    if (row == 0 && column == 1) {
        //sets value at that location to 24.3
        arr[row][column] = 24.3;
    } else if (row == 1 && column == 2) {
        //sets value at that location to 43.2
        arr[row][column] = 43.2;
    }
}

float findSmallest (float arr[][COLUMNS], int rows) {
//sets the first value in the array to minimum
float min = arr[0][0];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            //if any number in the array is smaller than the minimum, that becomes the new minimum
            if (min > arr[i][j]) {
                min = arr[i][j];
            }
        }
    }

    //sends minimum (smallest value) back to main
    return min;
}

float findAverage (float arr[][COLUMNS], int rows) {
//creates a sum value that starts at zero
float sum = 0;
//creates a static variable to count how many times the code runs (aka how many numbers are added)
static int count = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            //adds value to sum
            sum += arr[i][j];
            //increases amount of elements counted by one
            count++;
        }
    }

    //calculates average: [f(1) + f(2) + f(3) ... + f(n-1) + f(n)]/n
    float average = sum/count;
    //sends average back to main
    return average;
    
}