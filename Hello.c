#include <stdio.h>
int main(){
    puts("First attempt of C language");
    int num = 5;
    //char name = "Sam";
    int num2 = 6;
    int total = num + num2;
    int seconds = 60;
    int minutes = 60;
    const int days_of_week = 7;
    printf("There are %d days in the week\n", days_of_week);
    printf("One hour is %d seconds\n", seconds * minutes);
    printf("The value of five is %d", total);
    //return 0;
}