#include <stdio.h>

int main(){
    int i, n, j, count;
    int arr[i];
    int duplicate[i];

    printf("Input the Number of the Values: ");
    scanf("%d", &n);

    printf("Enter %d Values:\n", n);
    for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) { 
         for ( j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                    count++;
                    duplicate[j] = 1; 
            }
        }
        if (duplicate[i] != 1) {
            duplicate[i] = 0;
        }
       }
       printf("Total Number of Duplicate elements: %d", count);
       return 0;
}
