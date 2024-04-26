#include <stdio.h>

int findDuplicates(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {   
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    return count;
}


int main (){
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

    int duplicates = findDuplicates(arr, n);
    printf("Total number of duplicate elements found in the array is: %i", duplicates);
}