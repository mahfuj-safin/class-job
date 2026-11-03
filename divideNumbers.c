/**
 * Algorithm:
 * 
 * 
 * 
 * Step 1: Start
 * Step 2: Declare a, b and quotient
 * Step 3: Input a and b
 * Step 4: Calculate quotient = a / b
 * Step 5: Print quotient
 * Step 6: Stop
 */

 
#include <stdio.h>

int main()
{
    float a, b, quotient;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    quotient = a / b;

    printf("Quotient = %.2f", quotient);

    return 0;
}
