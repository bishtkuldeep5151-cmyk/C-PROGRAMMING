#include <stdio.h>
int main() {
    int i, j;
    int swap, temp;
    int arr[5] = {64, 34, 25, 12, 22};
    for (i=0; i < 5; i++){
        for (j=0; j<5-i-1; j++){
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }
    printf("Sorted array: \n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}