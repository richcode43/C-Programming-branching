#include<stdio.h>

int main(){
	int arr[7]={5,10,3,4,23,9,8};
	
	int evenArr[4]={};
	int oddArr[4]={};
	int i;
	
	
	
	for(i=0; i<7; i++){
		if(arr[i]%2 >0){
			printf("\n Odd elements[#]: %d", arr[i]);
		}			
		else if(arr[i]%2 == 0){
			printf("\n Even elements[#]: %d", arr[i]);
		}
	}

	
	
	
	
	return 0;
}