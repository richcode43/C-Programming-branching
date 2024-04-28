#include <stdio.h>

int main() {
    int n, i, largest, secondLargest;
    printf("Input the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    // Assuming the first two elements as largest and second largest
    if(arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    
    // Finding the largest and second largest
    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("The Second largest element in the array is: %d\n", secondLargest);
    
    return 0;
}
