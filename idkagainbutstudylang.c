//Finding Maximum and Minimum
//Write a function that determines the largest and smallest values stored in an array. The function should process the array elements efficiently using iteration.

//INSTRUCTIONS
//Implement a function findMaxMin().
//The function must accept two parameters: an integer array and its size.
//Inside the function, determine and print the largest and smallest values in the array.
//REQUIREMENTS
//The function must traverse the array only once.
//The largest and smallest values must be determined using comparison operators.
//No built-in sorting functions are allowed.
//The code must compile and execute without errors.
//NOTE: Initialize both the maximum and minimum variables with the first element of the array before starting comparisons.
// VEB-PROG2-MOD03LE003
//For example:

//Test	Result
//int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//Max: 15, Min: 1
//int arr[8] = {20, 11, 123, 871, 81911, 1112, 1323, 9999};
//Max: 81911, Min: 11

#include <stdio.h>

void findMaxMin(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    
    printf("Max: %d, Min: %d\n", max, min);
}

int main() {
    int arr[8] = {20, 11, 123, 871, 81911, 1112, 1323, 9999};
    findMaxMin(arr, 8);
    return 0;
}