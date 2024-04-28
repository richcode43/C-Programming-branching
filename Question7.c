
//C.PROGRAMMING QUESTION 7

//7. Write a program in C to separate odd and even integers into separate arrays
//* Test Data :
//* Input the number of elements to be stored in the array :5
//* Input 5 elements in the array :
//* element - 0 : 25
//* element - 1 : 47
//* element - 2 : 42
//* element - 3 : 56
//* element - 4 : 32
//* Expected Output :
//* The Even elements are :
//* 42 56 32
//* The Odd elements are :
//* 25 47

// #include <stdio.h>

int main() {
    int n, i, j, evenCount = 0, oddCount = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    printf("The Even elements are :\n");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("The Odd elements are :\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}

