#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
// Escape sequence in C programming language
int main(){
    //example of \n(new line)
    printf("Hello World\n");
    printf("This is a new line. \n");

    printf("12345\rABCDE\n");

    printf("Alert sound!\a");

    char str[20] = "HelloWorldwith";
    printf("%s\n", str);

    char strtest[20] = "Hello\0World";
    printf("\nThis is the output%s\n", strtest);

    int test = 'c';
    printf("%d", test);
    return 0;
}