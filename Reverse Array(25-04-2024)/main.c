#include <stdio.h>


int main (){
    int n;

    printf("Type in the length of the array: ");
    scanf("%i", &n);

    if (n <= 0)
    {
        return -1;
    }
    
    int arr[n];

    printf("Type in the values of each index in the array.\n");

    for (size_t i = 0; i < n; i++)
    {
        printf("[%i] = ", i);
        scanf("%i", &arr[i]);
    }

    printf("Original Array: ");

    for (size_t i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }

    printf("\nReversed Array: ");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%i ", arr[i]);
    }
}