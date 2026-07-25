#include <stdio.h>
int main(){
    float a,b;
    int  operator;
    printf("Enter two numbers : ");
    scanf("%f,%f",&a,&b);

    printf("\nchoose operator:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
     
     printf("Enter operator (1-4) :");
     scanf("%d",&operator);

     switch(operator){
        case 1:
        printf("Addition of the two numbers: %.2f",a+b);
        break;

        case 2:
        printf("Subtraction of the two numbers:%.2f", a-b);
        break;

        case 3:
        printf("Multiplication of two numbers:%.2f", a*b);
        break;

        case 4:
        if(b!=0){
            printf("Division of two numbers:%.2f",a/b);
        }
        else{
            printf("Division is not defined");
        }
        break;

        default :
        if (operator<1 || operator>4)
        printf("Invalid operator! enter operator between 1-4");
     }
      return 0;
}