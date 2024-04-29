#include<stdio.h>

int main(){
	
	int newArr[9] = {3,4,5,6,7,82,33,42,10};
	int avg;
	int sum = 0;
	
	for(int i=0; i<9; i++){
		
		sum = sum + newArr[i];
	}
	
	avg = sum/9;
	
	printf("The Average of the Array:%d\n ", avg);
	
	return 0;
}
