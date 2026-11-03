/**
 * Algorithm:
 * 
 * step 1: start
 * step 2: declare side and area
 * step 3: input side
 * step 4: calculate area = side * side
 * step 5: print area
 * step 6: stop
 * 
 */

//  program:

#include <stdio.h>
int main(){
    float side, area;

    printf("Enter the side: ");
    scanf("%f", &side);
    area = side * side;

    printf("Area of the triangle = %.2f", area);
    return 0;
}
