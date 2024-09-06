#include <stdio.h>

#define ROWS 10
#define COLUMNS 10

void print(int arr[][COLUMNS], int rows);

int main () {

    //create and initialize array
    int arr2D[ROWS][COLUMNS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    //print a single element
    printf("%d\n", arr2D[1][0]);

    //change the element
    arr2D[2][1] = 10;

    //print the entire array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%5d", arr2D[i][j]);
        }
        puts("");
    }

    //initialize entire array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            arr2D[i][j] = i * j;
        }
        
    }
    
    puts("");
    print(arr2D, ROWS);

    //reads values to the array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("\nEnter the value for arr2D[%d][%d]: \n", i, j);
            scanf("%d", &arr2D[i][j]);
        }
        
    }

    puts("");
    print(arr2D, ROWS);
    
    //assign the first row to be entirely 7's
    for (int j = 0; j < COLUMNS; j++) {
        arr2D[0][j] = 7;
    }

    
    return 0;
}
    
//print the entire array (with different values this time)
void print(int arr[][COLUMNS], int rows) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%5d", arr[i][j]);
        }
        puts("");
    }
}