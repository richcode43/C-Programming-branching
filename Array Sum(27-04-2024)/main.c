#include <stdio.h>

int arraySum(int arr[], int arrSize) {
    int sum = 0;

    for (size_t i = 0; i < arrSize; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int n;

    printf("Input the number of elements to store in the array: ");
    scanf("%i", &n);

    if (n <= 0)
    {
        return -1;
    }
    
    int arr[n];

    printf("Input %i number of elements to store in the array.\n", n);

    for (size_t i = 0; i < n; i++)
    {
        printf("Element - %i : ", i);
        scanf("%i", &arr[i]);
    }

    printf("Sum of all elements stored in the array is: %i", arraySum(arr, n));
}