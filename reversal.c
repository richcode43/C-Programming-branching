#include <stdio.h>
#define n 3


int main(){
	
	int newArr[n];
	int i;
	
	//input value dynamically
	for(i=0; i<n; i++){
		printf("newArr[%d]=", i);
		scanf("%d", &newArr[i]);
	}
	
	
	printf("\n");
	
	//reversed order
	printf("Reversed Order:");	
	for(i=n-1 ; i >=0; i-- ){

	printf("\n %d", newArr[i]);
	}
	
	
	
	
	return 0;
}