#include <stdio.h>
int main(){
    int a,b,c;
   printf("Enter two numbers:");
   scanf("%d%d",&a,&b);
   
   printf("\nBefore swaping:\n");
   printf("A=%d\n",a);
   printf("B=%d\n",b);
    

    c=a;
    a=b;
    b=c;

    printf("\nAfter swaping:\n");   
    printf("A=%d\n",a);
    printf("B=%d\n",b);
    




return 0;
   
}