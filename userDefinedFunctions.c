#include <stdio.h>

//the void function doesn't return anything
void course() {
    puts("You are in COP 2271 course!");
}

void courseWithNumber(int courseNumber) {
    printf("You are in COP %d course!", courseNumber);
    
}

int sumRange(int start, int end) {
    int sum = 0;
    for (int i = start; i < end; i++) {
        sum += i;
    }
    return sum;
}


int main() {

    printf("%d\n\n", sumRange(10,20));
    
    course();
    courseWithNumber(2313);
    return 0;
}