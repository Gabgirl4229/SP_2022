#include <stdio.h>
#include <math.h>

int main(void) {
    
    printf("     x    sin(x)  cos(x)  tan(x)  exp(x) \n");
    printf("-----------------------------------------\n");
    
    for (float i = -3.14; i <= 3.14; i += (3.14 / 5)) {
        printf("%8.2f", i);
        printf("%8.2f", sin(i));
        printf("%8.2f", cos(i));
        printf("%8.2f", tan(i));
        printf("%8.2f\n", exp(i));
        
    }
    
    return 0;
}