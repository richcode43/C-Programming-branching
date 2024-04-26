#include <stdio.h>

float myAverage(float arr[], int n) {
    int count = 0;
    float sum = 0;

    for (; count < n; count++)
    {
        sum += arr[count];
    }

    if (count == 0)
    {
        return 0;
    }
    
    return sum/count;
}

int main (){
    int n;

    printf("Type in the number of values you are calculating the average of: ");
    scanf("%i", &n);

    if (n <= 0)
    {
        return -1;
    }
    
    float arr[n];

    for (size_t i = 0; i < n; i++)
    {
        printf("[%i] = ", i);
        scanf("%f", &arr[i]);
    }

    printf("The average of the given values is: %.2f", myAverage(arr, n));
    
}