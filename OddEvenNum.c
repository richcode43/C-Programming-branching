#include <stdio.h>

int main(){
    int arr[n];
    int n, i;
    int evenArr[i], oddArr[i];
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    printf("Enter %d Values: ", n);
    for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenArr[evenCount] = arr[i];
            evenCount++;
        }
        else{
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

     printf("Odd Numbers are:");
    for(i = 0; i < n; i++){
    printf("\n%d\t", oddArr[i]);
    }
     
     printf("Even Numbers are:");
    for(i = 0; i < n; i++){
        printf("Even Numbers are: %d\t", evenArr[i]);
    }
}
