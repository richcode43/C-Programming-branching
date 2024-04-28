
#include <stdio.h>

int main(){
    int i, n;
    int realArr[100], copyArr[100];
    
    printf("Input the Number of Values: ");
    scanf("%d", &n);

    printf("Enter %d Values of Real Array:\n ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &realArr[i]);
    }

    for(i = 0; i < n; i++){
        copyArr[i] = realArr[i];
    }

    printf("\nValues in Copy Array: \n");
    for(i = 0; i < n; i++){
        printf("%d\t", copyArr[i]);
    }
    return 0;
}
