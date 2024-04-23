int fibonacci(int n){
	int numberA = 1;
	int numberB = 0;
	int sum;
	
	
//n is the number of terms in the sequence we want to print out.

	for(int index = 0; index < n; index++){
		sum = numberA + numberB;
		
		if(numberA > numberB){
			numberB = sum;
		}
		else{
			numberA = sum;
		}
	}
	
	return sum;
}

int main() {
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int i = 0;
	while (i)
	{
		int f = fibonacci(i);
		if (f > n)
		{
			break;
		}
		
		printf("%d./n", f);
		
		i++;
	}
}