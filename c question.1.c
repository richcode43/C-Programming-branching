#include <stdio.h>

int main(){
	int numbers[100];
	int count = 0;
	int sum = 0;
	int num;
	
	while (1){
		printf("Do you want to add a number? (1/0): ");
		scanf("%d", &num);
		if(num==0){
			break;
		}
		numbers[count] = num;
		count++;
	}
	
	for(int i=0; i <count; i++){
		sum += numbers[i];
	}
	
	float average = (float)sum / count;
	printf("Average: %f\n", average);
	
	return 0;
}
