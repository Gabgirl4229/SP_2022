#include <stdio.h>
#include <string.h>

#define SIZE 100

size_t my_strspn(const char s1[], const char s2[]);

int main(void) {
    char str[SIZE];

    char str1[] = "Hello Hello Hello!!!";
    char str2[] = "!el Ho";

    //use function strspn
    printf("%lu\n", my_strspn(str1, str2));

    //prompt
    puts("Enter your name:");
    

    //scan the string with scanf
    scanf("%[^\n]s", str);



/*
    //scan character by character
    int i = 0;
    while (i < SIZE - 1) {
        str[i] = getchar();
        if (str[i] == '\n') {
            //you cannot put the null command here
            //if you put more characters than the limit, then there will be no null character
            //str[i] = '\0';
            break;
        }
        i++;
    }
    //THIS is where the null command should go
    str[i] = '\0';
*/

/*
    //scan with fgets
    fgets(str, SIZE - 1, stdin);
*/

/*
    //strlen
    printf("string length = %lu\n", strlen(str));
*/

/*
    //strcspn
    printf("strcspn = %lu\n", strcspn(str, "\n"));
    str[strcspn(str, "\n")] = '\0';
*/  


    //print
    printf("Your name is \"%s\"\n", str);

    
}

size_t my_strspn(const char s1[], const char s2[]) {
int count = 0;
    
    for (int i = 0; s1[i] != '\0'; i++) {
    int isMatch = 0;
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                count++;
                isMatch = 1;
            }
        }
        if (isMatch == 0) {
            return count;
        }
        
    }

    //return count;
}