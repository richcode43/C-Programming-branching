#include <stdio.h>

int main(){
	int n;
	printf("Input the number of elements to be stored in the first array: ");
	scanf("%d", &n);
	
	int arr1[n];
	printf("Input %d elements in the array:\n", n);
	for(int i=0; i<n; i++){
		printf("element - %d: ", i);
		scanf("%d", &arr1[i]);
	}
	
	int m;
	printf("Input the number of elements to be stored in the second array: ");
	scanf("%d", &m);
	
	int arr2[m];
	printf("Input %d elements in the array:\n", m);
	for(int i=0; i<m; i++){
		printf("element-%d: ", i);
		scanf("%d", &arr2[i]);
	}
	
	int merged[2*n];
	int i,j,k=0;
	
	//Merge the two arrays
	for(i=0; i<n; i++){
		merged[k++]=arr2[i];
	}
	
	//Sort the merged rray in the descending order
	for(i=0; i<2*n; j++){
		for(j=i+1; j<2*n; j++){
			if(merged[i] < merged[j]){
				int temp = merged[i];
				merged[i] = merged[j];
				merged[j] = temp;
			}
		}
	}
	
	printf("The merged array in the descending order is: ");
	for(i=0; i<2*n; i++){
		printf("%d", merged[i]);
	}
	
	printf("\n");
	
	return 0;
}
