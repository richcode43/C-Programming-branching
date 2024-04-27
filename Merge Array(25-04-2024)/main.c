#include <stdio.h>

int mergeArray(int array1[], int n1, int array2[], int n2, int mergedArray[]) {
    for (size_t i = 0; i < n1; i++)
    {
        mergedArray[i] = array1[i];
    }
    
    for (size_t i = 0; i < n2; i++)
    {
        mergedArray[n1 + i] = array2[i];
    }

    int flag = 1;
    while (flag) {
        flag = 0;

        for (size_t i = 0; i < n1 + n2; i++) {
            if (mergedArray[i] < mergedArray[i + 1]) {
                int temp = mergedArray[i + 1];
                mergedArray[i+1] = mergedArray[i];
                mergedArray[i] = temp;

                flag = 1;
            }
        }
    }

    return 0;
}


int main (){
    int n1,n2;

    printf("Input the number of elements to store in the array: ");
    scanf("%i", &n1);

    if (n1 <= 0)
    {
        return -1;
    }
    
    int arr1[n1];

    printf("Input %i number of elements to store in the array.\n", n1);

    for (size_t i = 0; i < n1; i++)
    {
        printf("Element - %i : ", i);
        scanf("%i", &arr1[i]);
    }

    printf("Input the number of elements to store in the other array: ");
    scanf("%i", &n2);

    if (n2 <= 0)
    {
        return -1;
    }
    
    int arr2[n2];

    printf("Input %i number of elements to store in the array.\n", n2);

    for (size_t i = 0; i < n2; i++)
    {
        printf("Element - %i : ", i);
        scanf("%i", &arr2[i]);
    }

    int arrMerged[n1 + n2];
    mergeArray(arr1, n1, arr2, n2, arrMerged);

    printf("Original Array 1:");
    for (size_t i = 0; i < n1; i++)
    {
        printf(" %i ", arr1[i]);
    }

    printf("\nOriginal Array 2:");
    for (size_t i = 0; i < n2; i++)
    {
        printf(" %i ", arr2[i]);
    }

    printf("\nMerged Array:");
    for (size_t i = 0; i < n1 + n2; i++)
    {
        printf(" %i ", arrMerged[i]);
    }
}