#include <stdio.h>

int arrayGetOdd(int arr[], int arrSize, int arrOdd[]) {
    for (size_t i = 0; i < arrSize; i++)
    {
        arrOdd[i] = 0;
        if (arr[i] % 2 != 0)
        {
            arrOdd[i] = arr[i];
        }
    }

    return 1;
}

int arrayGetEven(int arr[], int arrSize, int arrEven[]) {
    for (size_t i = 0; i < arrSize; i++)
    {
        arrEven[i] = 0;
        if (arr[i] % 2 == 0)
        {
            arrEven[i] = arr[i];
        }
    }

    return 1;
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

    int arrEven[n],arrOdd[n];

    arrayGetOdd(arr, n, arrOdd);
    arrayGetEven(arr, n, arrEven);

    printf("The Even elements are:");

    for (size_t i = 0; i < n; i++)
    {
        if (arrEven[i] == 0) {
            continue;
        }
        printf(" %i ", arrEven[i]);
    }

    printf("\nThe Odd elements are:");

    for (size_t i = 0; i < n; i++)
    {
        if (arrOdd[i] == 0) {
            continue;
        }
        printf(" %i ", arrOdd[i]);
    }
}