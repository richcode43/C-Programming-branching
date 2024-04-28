#include <stdio.h>
#include <stdlib.h>

int average(int arr[], int n){
	int sum = 0;
	
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	
	return sum/n;
}


int main() {
	int n;
	
	printf("Input the length of the array: ");
	scanf("%i", &n);
	
	int arr[n];
	
	printf("Input elements into the array.");
	for (int i = 0; i < n; i++){
		printf("[%i] - ", i);
		scanf("%i", &arr[i]);
	}
	
	printf("The average of the array is %i.", average(arr, n));
}
