//Sum and Average Calculation
//Write a function that computes the total sum and the average of elements stored in an array. The function must demonstrate correct accumulation and proper return behavior.

//INSTRUCTIONS
//Implement a function sumAvg().
//The function must accept two parameters: an integer array and its size.
//Inside the function, calculate and print the sum of all elements.
//The function must return the average of the array elements.
//REQUIREMENTS
//The array must be traversed using a loop.
//The average must be computed using proper type casting to avoid integer division.
//The return type of the function must match the data type of the average.
//The code must compile and execute without errors.
//NOTE: If both the sum and size are integers, casting either value to float or double before division ensures an accurate average.
// VEB-PROG2-MOD03LE004
//For example:

//Test	Result
//int arr[] = {4, 6, 7, 3, 9};
//Sum: 29
//Average: 5.80
//int arr[] = {1,2,3,4,5,6,7,8,9,10};
//Sum: 55
//Average: 5.50

#include <stdio.h>

float sumAvg(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    printf("Sum: %d", sum);
    
    return (float)sum / size;
}
