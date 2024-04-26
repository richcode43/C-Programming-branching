#include <stdio.h>

int arrayCopy(int arrOriginal[], int n1, int arrTarget[], int n2) {
    if (n1 != n2) {
        return 0;
    }

    for (size_t i = 0; i < n1; i++)
    {
        arrTarget[i] = arrOriginal[i];
    }

    return 1;
}


int main (){
    int n;

    printf("Type in the length of the array: ");
    scanf("%i", &n);

    if (n <= 0)
    {
        return -1;
    }
    
    int arr1[n], arr2[n];

    printf("Type in the values of each index in the array.\n");

    for (size_t i = 0; i < n; i++)
    {
        printf("[%i] = ", i);
        scanf("%i", &arr1[i]);
    }

    if (!arrayCopy(arr1, n, arr2, n))
    {
        return -1;
    }
    
    printf("Original Array: ");

    for (size_t i = 0; i < n; i++)
    {
        printf("%i ", arr1[i]);
    }

    printf("\nCopied Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr2[i]);
    }
}