#include <stdio.h>

int main() {
    int n, i, smallest, secondSmallest;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Input %d elements in the array (value must be <9999):\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // Assuming the first two elements as smallest and second smallest
    if(arr[0] < arr[1]) {
        smallest = arr[0];
        secondSmallest = arr[1];
    } else {
        smallest = arr[1];
        secondSmallest = arr[0];
    }
    
    // Finding the smallest and second smallest
    for(i = 2; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    
    printf("The Second smallest element in the array is: %d\n", secondSmallest);
    
    return 0;
}
