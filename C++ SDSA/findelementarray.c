#include <stdio.h>
int main() {
    int arr[10];
    int n = 10, i, element, found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &element);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found at index %d.\n", element, i);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;}