
//C.PROGRAMMING QUESTION 5

//5. Write a program in C to merge two arrays of the same size sorted in descending order
//* Test Data :
//* Input the number of elements to be stored in the first array :3
//* Input 3 elements in the array :
//* element - 0 : 1
//* element - 1 : 2
//* element - 2 : 3
//* Input the number of elements to be stored in the second array :3
//* Input 3 elements in the array :
//* element - 0 : 1
//* element - 1 : 2
//* element - 2 : 3
//* Expected Output :
//* The merged array in descending order is :
//* 3 3 2 2 1 1

// #include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], mergedArr[2 * n];

    printf("Input %d elements in the first array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Input the number of elements to be stored in the second array: ");
    scanf("%d", &n);
    printf("Input %d elements in the second array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n; i++) {
        mergedArr[i] = arr1[i];
        mergedArr[n + i] = arr2[i];
    }

    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - i - 1; j++) {
            if (mergedArr[j] < mergedArr[j + 1]) {
                temp = mergedArr[j];
                mergedArr[j] = mergedArr[j + 1];
                mergedArr[j + 1] = temp;
            }
        }
    }

    printf("The merged array in descending order is:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
