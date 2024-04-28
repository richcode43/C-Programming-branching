#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	
	printf("Input the length of the array: ");
	scanf("%i", &n);
	
	int arr[n];
	
	printf("Input elements into the array.\n");
	for (int i = 0; i < n; i++){
		printf("[%i] - ", i);
		scanf("%i", &arr[i]);
	}
	
	int temp[n];
	
	for(int i = n -1; i >= 0; i--){
		temp[n-1-i] = arr[i];
	}
	
	printf("The values of the reversed array is: \n");
	for (int i = 0; i < n; i++){
		printf("[%i] - %i\n", i, temp[i]);
	}
}

