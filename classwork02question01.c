#include <stdio.h>

int main() {

    //creates float variables for weight and height
    float weight, height, bmi;

    //asks the viewer for weight and height
    puts("What is your current weight (in pounds)? ");
    scanf("%f", &weight);

    puts("What is your current height (in inches)? ");
    scanf("%f", &height);

    //converts weight/height to kg and m
    weight = weight * 0.45;
    height = height * 0.0254;

    //calculates BMI
    bmi = weight / (height * height);
    printf("Your BMI is %f.\n\n", bmi);

    //tells viewer the category based on BMI
    if (bmi < 18.5) {
        printf("You are underweight.\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("You are at a normal weight.\n");
    }
    else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("You are overweight.\n");
    }
    else if (bmi >= 30.0) {
        printf("You are obese.\n");
    }
    else {
        printf("Error: you entered something that cannot be read by the computer.\n");
        printf("\nDid you enter letters as well as numbers? Please type only numbers.\n");
    }

    //Bonus: grade >= 60 ? puts("Passed") : puts("Failed");

/*

int myNumber = 5;
yourNumber = (mynumber >=5) ? myNumber - 6 : myNumber + 1;

*/
    
}