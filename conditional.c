//introduction to conditional statement
#include <stdio.h>

int main(){
    int num;
    printf("please enter a number");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d is an event number\n", num);
    }
    else{
        printf("%d is an odd number \n", num);
    }
    return 0;
}