#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n);
    
    int firstArray[n], secondArray[n], mergedArray[2 * n];
    
    printf("Input %d elements in the first array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &firstArray[i]);
    }
    
    printf("Input %d elements in the second array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &secondArray[i]);
    }
    
    // Merging arrays
    i = j = k = 0;
    while (i < n && j < n) {
        if (firstArray[i] >= secondArray[j]) {
            mergedArray[k++] = firstArray[i++];
        } else {
            mergedArray[k++] = secondArray[j++];
        }
    }
    
    // Adding remaining elements from the first array
    while (i < n) {
        mergedArray[k++] = firstArray[i++];
    }
    
    // Adding remaining elements from the second array
    while (j < n) {
        mergedArray[k++] = secondArray[j++];
    }
    
    // Printing merged array in descending order
    printf("The merged array in descending order is:\n");
    for (i = 2 * n - 1; i >= 0; i--) {
        printf("%d ", mergedArray[i]);
    }
    
    return 0;
}
