#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    
    int arr[n], even[n], odd[n];
    
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }
    
    printf("The Even elements are:\n");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    
    printf("\nThe Odd elements are:\n");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    
    return 0;
}
