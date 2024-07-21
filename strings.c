/*
this is my notes on learning strings in c
 */

#include <stdio.h>
#include <string.h>

int main() {
    // declaring and initializing strings in C
    char name[] = "Sam";
    printf("%s\n", name);  // Adding a newline for better readability

    // Fixing initialization of 'fruit'
    char fruit[] = "abc";
    printf("%s\n", fruit);  // Adding a print statement for fruit

    char *test = "hello";
    printf("%s\n", test);  // Adding a print statement for test

    // accessing specific characters in a string
    char str[] = "hello";
    printf("%c\n", str[0]); // prints h
    printf("%c\n", str[1]); // prints e

    // getting user input with scanf
    char user_name[30];
    printf("Enter your name: ");
    scanf("%s", user_name);
    printf("Hello, %s!\n", user_name);
    // credit goes out to programiz

    // read a line of text (Note: fgets is safer than gets)
    // fgets(user_name, sizeof(user_name), stdin);
    // printf("Hello, %s!\n", user_name);

    /*
    String functions to know
    */
    // string length
    char str2[] = "hello";
    printf("Length of str2: %lu\n", strlen(str2)); // Using %lu for size_t

    char a[20] = "Xavier";
    char b[20] = {'X', 'a', 'v', 'i', 'e', 'r', '\0'}; // Null-terminate the char array
    printf("Length of string a: %lu\n", strlen(a)); // Using %lu for size_t
    printf("Length of string b: %lu\n", strlen(b)); // Using %lu for size_t

    return 0;
}
