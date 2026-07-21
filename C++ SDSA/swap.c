#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}  


int main() {
    int a,b;
    a = 10;
    b = 20;

    
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    
}
    
        


