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
//    duplicate[i] = -1;
    }

    for (i = 0; i < n; i++) { 
        int recur = 1;
         for ( j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
//                if (duplicate[j] != 1) {
                    count++;
                    duplicate[j] = 1; 
//                }
//                recur = 0;
            }
        }
        if (recur && duplicate[i] != 1) {
            duplicate[i] = 0;
        }
       }
       printf("Total Number of Duplicate elements: %d", count);
       return 0;
}
