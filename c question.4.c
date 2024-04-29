#include <stdio.h>

int main(){
	int n;
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Input %d elements in the array:\n",n);
	
	for(int i=0; i<n; i++){
		printf("element-%d", i);
		scanf("%d", &arr[i]);
	}
	
	int count = 0;
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
	}
	
	printf("Total number of duplicate elements found in the array is:%d\n", count);
	
	return 0;
}
