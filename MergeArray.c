#include <stdio.h>

int main(){
    int arr1[100];
    int arr2[100];
    int n = sizeof arr1 / sizeof arr2;
    int result[2 * n];
    int i, a, b, m;

    do{
    printf("Enter the Values in the first array: ");
    scanf("%d", &arr1[a]);
    
    printf("\nEnter the Values in the second array: ");
    scanf("%d", &arr2[a]);
    }

    while(a < n && b < n);
        if(arr1[a] >= arr2[b]){
            result[m++] = arr1[a++];
        }
        else{
            result[m++] = arr2[b++];
        }
    

    printf("Merged array in Descending Order: ");
    for(i = (2 * n) - 1; i >= 0; i--){
        printf("\n%d", result[i]);
    }
    return 0;
}
