#include <stdio.h>

int main(){
	 int n, i;
    int arr[n];
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
    
     printf("Even Numbers are:");
    for(i = 0; i < evenCount; i++){
        printf("%d\t", evenArr[i]);
    }

     printf("\nOdd Numbers are:");
    for(i = 0; i < oddCount; i++){
    printf("%d\t", oddArr[i]);
    }
     

    return 0;
}

