#include<stdio.h>



int main(){
	
	int arr[12]= {3,6,7,8,9,2,23,45,67,89,88,90};
	int sum = 0;
	int i;
	
	for(i = 0; i<12; i++){
		
		sum = sum + arr[i];
		
	}
	
	printf("Sum of the array: %d\n", sum);
	
	return 0;
}

