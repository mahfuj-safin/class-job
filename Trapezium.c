
/**
 * step-1: start
 * step-2: Declare float a, b, h, area
 * step-3: input parallel side a,b and height h.
 * step-4: calculate area = 0.5 * (a + b) * h.
 * step-4: output area
 * step-5: stop
 */


#include <stdio.h>
int main()
{
    float a, b, h, area;

    printf("Enter first parallel side: ");
    scanf("%f", &a);

    printf("Enter second parallel side: ");
    scanf("%f", &b);

    printf("Enter height: ");
    scanf("%f", &h);

    area = 0.5 * (a + b) * h;

    printf("Area of Trapezium = %.2f", area);

    return 0;
}
