#include<stdio.h>


int secondLowest(int a[], int length);


int main(){
	
	int a[]={9,4,5,6,7,12,33,55,6,7};
	
	int result = secondLowest(a,10);

	printf("second lowest number: %d\n", result);

	return 0;
}

int secondLowest(int a[], int length){
	int	min1;
	int	min2;
	
	if(a[0] < a[1]){
		min1 = a[0];
		min2 = a[1];
	}
	else{
		min1 = a[1];
		min2 = a[0];
	}
	
	for(int i = 2; i < length; i++){
		if (a[1] < min1){
			min2 = min1;
		}
		else if( a[i] < min2 && a[i] > min1){
			min2 = a[i];
		}
	}
	
	return min2;
	
}



