#include <stdio.h>

int arrayMin(int arr[], int arrSize) {
    int min = arr[0];

    for (size_t i = 1; i < arrSize; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];   
        }
    }

    return min;
}

int arrayMax(int arr[], int arrSize) {
    int max = arr[0];

    for (size_t i = 1; i < arrSize; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];   
        }
    }

    return max;
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

    printf("Maximum element is: %i\n", arrayMax(arr, n));
    printf("Minimum element is: %i\n", arrayMin(arr, n));
}