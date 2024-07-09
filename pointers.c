#include <stdio.h>

#include <stdio.h>

// This code is a simple example of how to create and use a pointer in C.

int main(){
    // Creating a pointer
    // A pointer is a variable that contains the memory address of another variable.
    // In C, the type of the pointer is determined by the type of the variable it points to.
    // int *p; //this line declares a pointer variable called p that points to an integer
    // p = NULL; //this line sets the value of the pointer to NULL. This is useful for initializing the pointer before it is assigned a value.
    // printf("%d", *p); //this line attempts to print the value at the memory address contained in the pointer p. However, since p is NULL, this will result in a segmentation fault.
    // return 0;

    // Declaring variables and creating a pointer
    // We declare an integer variable called ivar and a pointer variable called pvar.
    int ivar, *pvar;
    ivar = 5; //we initialize the integer variable to the value 5
    pvar = &ivar; //we set the pointer variable to point to the memory address of the integer variable.

    // Printing the value of the pointer
    // We print the value at the memory address contained in the pointer pvar using the dereference operator *.
    printf("%d", *pvar); //this line prints the value stored at the memory address contained in pvar, which is 5.

    return 0;
}
