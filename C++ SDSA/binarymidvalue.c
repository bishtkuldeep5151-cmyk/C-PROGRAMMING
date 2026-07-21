#include <stdio.h>
int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int low = 0;
    int high = 7;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == 4 || arr[mid] == 5) {
            printf("Element found at index %d\n", mid);
            break;
        } else if (arr[mid] < 3) {
            low = mid + 1;
        } else {
            high = mid - 1;
    
    }

    return 0;
}