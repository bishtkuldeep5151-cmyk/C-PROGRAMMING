#include <stdio.h>
int main() 
{
    int a , b ;
    printf("enter a number a. :");
    scanf("%d",&a);

    printf("enter another number b :");
    scanf("%d",&b);

    if(a>b)
    {
        printf("a is greater than b");
    }
    else if(a<b)
    {
        printf("b is greater than a");
    }
    else
    {
        printf("a is equal to b");
    }
    return 0;
}