
#include <stdio.h>

int main(){
    int i, n;
    int arr[n];
    int sum = 0;

    printf("Input the number of Elements in Array: ");
    scanf("%d", &n);

    printf("Enter %d Values: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        sum += arr[i];
    }

    printf("The sum of all the values in the array is: %d", sum);
    return 0;

}
