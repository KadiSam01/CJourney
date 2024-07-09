#include <stdio.h>

int main() {
    //basic string input and output
    char name[10];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    //basic integer input and output
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    printf("Enter another age");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    return 0;
}