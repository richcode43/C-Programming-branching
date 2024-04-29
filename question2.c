#include <stdio.h>

void reversed_array(int numArr[], int size) {
     printf("Reversed array: \n");
    int i;
    for (i = size-1; i>=0; i--){
        printf("%d \n", numArr[i]);
    }
}

int main()
{
    int numArr[] = {25, 50, 75, 12};
    int numArr2[] = {21, 10, 15, 23, 120};
    reversed_array(numArr, 4); 
    reversed_array(numArr2, 5);
    return 0;
}
