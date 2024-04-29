#include<stdio.h>

int main(void){
	
	int array[5] = {6,10,4,33,9};
	int max = array[0];
	
	//Maximum value
	int i;
	for(i=1; i<5; i++){
		if (max < array[i]){
			max = array[i];
		}
	}
	printf("The Max number is: %d\n\n",max);
	
	//Minimum value
	int Min = array[0];
	for(i=1; i<5; i++){
		if (Min > array[i]){
			Min = array[i];
		}
	}
	
	printf("The Min number is: %d\n\n",Min);
	 
	return 0;
}