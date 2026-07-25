#include <stdio.h>
int main(){
    float f, celsius;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&f);

    celsius = (f-32)*5/9;
    printf("Temperature in celsius: %.2f",celsius);
     return 0;
}