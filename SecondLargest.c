#include <stdio.h>

int main(){
    int i, n;
    int arr[n];
    int largest = 0;
    int secondLargest = 0;

    printf("Input the number of Elements in Array: ");
    scanf("%d", &n);

    printf("Enter %d Values: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
       if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("The Second largest element in the array is: %d", secondLargest);
    return 0;
}
