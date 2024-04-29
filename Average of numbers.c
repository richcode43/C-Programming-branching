
#include <stdio.h>

int main(){
	int i, n;
    float arr[n];
    int sum = 0;
	double average;
    
    printf ("Input the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Input %d integers: ", n);
    for(i = 0; i < n; i++){
    scanf("%f", &arr[i]);
    }
    for(i = 0; i < n; i++){
        sum += arr[i];
    }
     average = sum / n;

    printf("Average of the elements = %.1f", average);
   return 0;
}


