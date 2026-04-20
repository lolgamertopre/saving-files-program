//Reversing an Array
//Write a function that reverses the elements of an array.
//INSTRUCTIONS
//Implement a function reverseArray() that takes an array and its size as parameters.
//The function must reverse the elements of the array.
//Perform the reversal by swapping elements from the beginning and end moving toward the center.
//REQUIREMENTS
//You must only use the passed array.
//Do NOT initialize a new array.
//Use a temporary variable temp for swapping elements.
//The program must compile and run without errors.
// VEB-PROG2-MOD03LE005
//For example:
//Test	Result
//int arr[] = {1, 2, 3, 4, 5};
//5 4 3 2 1

#include <stdio.h>

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}