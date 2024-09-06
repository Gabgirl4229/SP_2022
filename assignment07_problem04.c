#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//function prototype
void lottery(int lotteryPick[]);

int main(void) {

    //establishes RNG system
    srand(time(0));
    
    //creates int variables for digits
    int num1, num2;
    int lotteryNo[2];

    //prompts the user to pick a number
    puts("Enter your lottery pick (two digits):");
    
    //scans the two digits
    scanf("%2d", lotteryNo);

    //initializes an array using the numbers
    lotteryNo[0] = num1;
    lotteryNo[1] = num2;
    
    for (int i = 0; i < 2; i++) {
        printf("Lottery numbers: %d\n", lotteryNo[i]);
    }
    
    //calls the lottery function
    lottery(lotteryNo);
}

void lottery(int lotteryPick[]) {

    //creates lottery numbers and randomizes them
    int num1 = rand()%9 + 1;
    int num2 = rand()%9 + 1;

    //counts how many times a digit matches the lottery
    int match = 0;

    printf("Lottery number: %d%d\n", num1, num2);
    
    //compares input array to lottery numbers
    if (lotteryPick[0] == num1) {
        match += 1;
    }
    
    if (lotteryPick[1] == num2) {
        match += 1;
    } 

    //if both match
    if (match == 2) {
        printf("Exact match! You win $10,000.\n");
    //if one matches
    } else if (match == 1) {
        printf("One-digit match. You win $1000.\n");
    //if neither match
    } else {
        printf("Sorry, no match :(\n");
    }
}