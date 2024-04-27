#include <stdio.h>

int arraySort(int arr[], int arrSize) {
    int flag = 1;
    while (flag) {
        flag = 0;

        for (size_t i = 0; i < arrSize - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i + 1];
                arr[i+1] = arr[i];
                arr[i] = temp;

                flag = 1;
            }
        }
    }

    return 0;
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

    arraySort(arr, n);

    printf("The Second smallest element in the array is: %i", arr[1]);
}