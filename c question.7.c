#include <stdio.h>

int main() {
  int n;
  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Input %d elements in the array:\n", n);

  for(int i = 0; i < n; i++) {
    printf("element - %d: ", i);
    scanf("%d", &arr[i]);
  }

  int even[n];
  int odd[n];
  int evenCount = 0, oddCount = 0;

  for(int i = 0; i < n; i++) {
    if(arr[i] % 2 == 0) {
      even[evenCount++] = arr[i];
    } else {
      odd[oddCount++] = arr[i];
    }
  }

  printf("The Even elements are: ");
  for(int i = 0; i < evenCount; i++) {
    printf("%d ", even[i]);
  }
  printf("\n");

  printf("The Odd elements are: ");
  for(int i = 0; i < oddCount; i++) {
    printf("%d ", odd[i]);
  }
  printf("\n");

  return 0;
}
