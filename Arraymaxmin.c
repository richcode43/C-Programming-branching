#include <stdio.h>

int main() {
    int n, i, max, min;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // Assuming the first element as maximum and minimum
    max = min = arr[0];
    
    // Finding maximum and minimum
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
    
    return 0;
}
