#include <stdio.h>

int main() {
    
    //creates weight integers
    int kgweight1, kgweight2, lbweight1, lbweight2;

    //asks for two kilogram weights
    puts("Enter two weights (in kilograms): ");
    scanf("%d%d", &kgweight1, &kgweight2);

    //asks for two pound weights
    puts("Enter two weights (in pounds): ");
    scanf("%d%d", &lbweight1, &lbweight2);

    //top border, 47 "-"s total (13x2 + 9x2 + 3 in between)
    printf("-------------------------------------------------\n");

    //row 1, column 1
    printf("%-9.1d|", kgweight1);

    //row 1, column 2 (with conversion)
    float kgweight1_converted = kgweight1 * 2.2;

    printf("%11.1f  |", kgweight1_converted);

    //row 1, column 3
    printf("  %-9.7d|", lbweight1);

    //row 1, column 4

    float lbweight1_converted = lbweight1 / 2.2;

    printf("%13.2f\n", lbweight1_converted);

    //row 2, column 1
    printf("%9.5d|", kgweight2);

    //row 1, column 2 (with conversion)
    float kgweight2_converted = kgweight2 * 2.2;

    printf("%11.2f  |", kgweight2_converted);

    //row 1, column 3
    printf("  %-9.1d|", lbweight2);

    //row 1, column 4

    float lbweight2_converted = lbweight2 / 2.2;

    printf("%13.3f\n", lbweight2_converted);

    //top border
    printf("-------------------------------------------------\n");

}