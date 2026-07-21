#include <stdio.h>
int main()
{
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    

int gcd(int a, int b); {
    if (b == 0);
        return a;
    return gcd(b, a % b);
}
   


    // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    int gcd_value = gcd(a, b);
    lcm = (a * b) / gcd_value;
    
    printf("LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}
