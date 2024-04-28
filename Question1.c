//C PROGRAMMING QUESTIONS
//
//1.  Write Program to find the average of a given set of numbers in an array. Numbers should be added dynamically

// #include <stdio.h>
// #include <stdlib.h>

int main() {
    int *numbers;
    int n, i;
    double sum = 0.0, average;


    printf("Enter the number of elements: ");
    scanf("%d", &n);
    numbers = (int *)malloc(n * sizeof(int));
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / n;
    printf("The average of the given numbers is: %.2lf\n", average);

    free(numbers);

    return 0;
}

