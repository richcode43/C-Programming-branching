#include <stdio.h>

int main() {
  int n;
  printf("Input the size of array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Input %d elements in the array:\n", n);

  for(int i = 0; i < n; i++) {
    printf("element - %d: ", i);
    scanf("%d", &arr[i]);
  }

  int min = 9999;
  int secondMin = 9999;

  for(int i = 0; i < n; i++) {
    if(arr[i] < min) {
      secondMin = min;
      min = arr[i];
    } else if(arr[i] < secondMin && arr[i] != min) {
      secondMin = arr[i];
    }
  }

  printf("The Second smallest element in the array is: %d\n", secondMin);

  return 0;
}

