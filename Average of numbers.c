
#include <stdio.h>

int main(){
	int i, n;
    int arr[n];
    int sum = 0;
	double average;
    
    printf ("Input the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Input %d integers: ", n);
    scanf("%f", &arr[i]);
    for(i = 0; i < 6; i++){
        sum += arr[i];
         average = sum / n;
    }
    

    printf("Average of the elements = %.1f", average);

}


