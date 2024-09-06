#include <stdio.h>
#include <string.h>

#define SIZE 30

char* my_strcpy(char s1[], const char s2[], int n);

//DIY
char* my_strcat(char s1[], const char s2[]);
int my_strcmp(const char s1[], const char s2[]);

int main(void) {
    char str1[SIZE] = "String one";
    char str2[SIZE] = "Second string";

    //strcpy (copies 2 into 1)
    puts(strcpy(str1,str2));

    //broken example, will create an array with a size larger than 30
    //strcpy(str1, "Very very very very very very very long string!");
    //fixed example (using our custom code)
    my_strcpy(str1, "Very very very very very very very long string!", SIZE);
    puts(str1);
    

    //strcat (adds 2 onto 1)
    //strcat(str1, ", "); <-- BROKEN (though I don't understand why)
    puts(strcat(str1, str2));

    return 0;
    
}

char* my_strcpy(char s1[], const char s2[], int n) {
    int i = 0;

    while (s2[i] != '\0' && i < n) {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';

    return s1;
}