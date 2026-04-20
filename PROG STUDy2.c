//Accessing and Modifying Array Elements
//Write a program that demonstrates how to access and modify elements in an array. The program should store user-input values and update a specific element.

//INSTRUCTIONS
//Ask the user to input 10 numbers and store them in an array.
//Modify the third element of the array to 101010.
// Display the updated array using a loop.
//REQUIREMENTS
//The program must use an array of exactly 10 elements.
//The modification must directly update the third element using array indexing.
//The updated array must be displayed correctly.
//The code must compile and execute without errors.
//NOTE: Remember that array indexing in C starts at 0. The third element is located at index 2.
// VEB-PROG2-MOD03LE002
//For example:

//Input	Result
//1 2 3 4 5 6 7 8 9 10
//1 2 101010 4 5 6 7 8 9 10
//100 200 300 400 500 600 700 800 900 1000
//100 200 101010 400 500 600 700 800 900 1000

#include <stdio.h>

int main() {
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    arr[2] = 101010;
    
    for (int i = 0; i < 10; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    
    return 0;
}