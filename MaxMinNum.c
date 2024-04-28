#include <stdio.h>

int main(){
    int arr[100];
    int n, i;
    int max = arr[0];
    int min = arr[0];

     printf("Input the Number of the Values: ");
    scanf("%d", &n);
     
    printf("Input the Values in the array: \n");
    for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }
    
    printf("Maximum Value is: %d\n", max);
    printf("Minimum Value is: %d\n", min);

    return 0;
}
