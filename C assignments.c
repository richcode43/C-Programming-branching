// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *numbers;  
//     int size;      
//     int i;
//     double sum = 0.0;
//     double average;

    
//     printf("Enter the number of elements: ");
//     scanf("%d", &size);

    
//     numbers = (int *)malloc(size * sizeof(int));

    
//     if (numbers == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;  // Exit with error code
//     }
//     printf("Enter %d numbers:\n", size);
//     for (i = 0; i < size; i++) {
//         scanf("%d", &numbers[i]);
//         sum += numbers[i];
//     }
//     average = sum / size;

    
//     printf("Average = %.2lf\n", average);

//     free(numbers);

//     return 0;
// }


// assignment2

// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter the number of values: ");
//     scanf("%d", &n);
 
//     int arr[n];

//     printf("Enter %d values:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

    
//     printf("Values in reverse order:\n");
//     for (int i = n - 1; i >= 0; i--) {
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }


// assignment 3

// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter the number of values: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter %d values:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Values in reverse order:\n");
//     for (int i = n - 1; i >= 0; i--) {
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }


// assignment 4

// #include <stdio.h>
// int main() {
//     int size, i, j, k;

//     printf("Enter the size of the arrays: ");
//     scanf("%d", &size);

   
//     printf("Enter elements of the first array (sorted in descending order):\n");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter elements of the second array (sorted in descending order):\n");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     i = j = k = 0;
//     while (i < size && j < size) {
//         if (arr1[i] >= arr2[j]) {
//             merged[k++] = arr1[i++];
//         } else {
//             merged[k++] = arr2[j++];
//         }
//     }

//     while (i < size) {
//         merged[k++] = arr1[i++];
//     }

//     while (j < size) {
//         merged[k++] = arr2[j++];
//     }

//     printf("Merged array (sorted in descending order):\n");
//     for (i = 0; i < size * 2; i++) {
//         printf("%d ", merged[i]);
//     }
//     printf("\n");

//     return 0;
// }



// assignment5

// #include <stdio.h>


// int main() {
//     int arr1[MAX_SIZE], arr2[MAX_SIZE];
//     int size, i;

  
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter elements of the array:\n");
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr1[i]);
//     }

   
//     for (i = 0; i < size; i++) {
//         arr2[i] = arr1[i];
//     }

//     printf("Elements of the second array (copied from the first array):\n");
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr2[i]);
//     }
//     printf("\n");

//     return 0;
// }


// assignment 6

// write a program to separate odd and even integers into separate arrays

// #include <stdio.h>
// int main() {
//     int arr[MAX_SIZE], even[MAX_SIZE], odd[MAX_SIZE];
//     int size, even_count = 0, odd_count = 0;

   
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

 
//     printf("Enter elements of the array:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }


//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 == 0) {
//             even[even_count++] = arr[i];
//         } else {
//             odd[odd_count++] = arr[i];
//         }
//     }

   
//     printf("Even numbers:\n");
//     for (int i = 0; i < even_count; i++) {
//         printf("%d ", even[i]);
//     }
//     printf("\n");

//     printf("Odd numbers:\n");
//     for (int i = 0; i < odd_count; i++) {
//         printf("%d ", odd[i]);
//     }
//     printf("\n");

//     return 0;
// }
