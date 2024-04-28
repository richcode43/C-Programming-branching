#include <stdio.h>

int main(){
    int i, n, j;
    int arr[n];
    int smallest = 0;
    int secondSmallest = 0;

    printf("Input the number of Elements in Array: ");
    scanf("%d", &n);

    printf("Enter %d Values: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if (arr[i] < arr[j]) {
        smallest = arr[i];
        secondSmallest = arr[j];
    } else {
        smallest = arr[j];
        secondSmallest = arr[i];
    }
        }
    }

    for(i = 0; i < n; i++){
       if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    
    printf("The Second smallest element in the array is: %d", secondSmallest);
    return 0;
}
