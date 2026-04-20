


//Write a program that demonstrates how to declare and initialize an array in C. The program should store integer values provided by the user and display them using a loop.INSTRUCTIONS
//Declare an integer array of size 5.
//Initialize the array with values entered by the user.
//Use a loop to print all array elements.
//REQUIREMENTS
//The program must use an array of exactly 5 elements.
//User input must be stored directly inside the array.
//Array elements must be printed using a loop structure.
//The code must compile and run without errors.
// VEB-PROG2-MOD03LE001
//For example:

//Input	Result
//1 2 3 4 5
//1 2 3 4 5
//123 123 123 123 123
//123 123 123 123 123 

#include <stdio.h>

int main() {
    int arr[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    
    return 0;
}