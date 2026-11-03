/**
 * Algorithm:
 *
 *
 * step 1 : start
 * step 2: declare a, b, c, s and area
 *
 * step3: input a, b, c
 * step 4: calculate s = (a + b + c) / 2
 * step 5: calculate area = sqrt(s*(s - a)*(s - b)*(s - c))
 * step 6: print area
 * step 7: stop
 */

// program:

#include <stdio.h>
#include <math.h>
int main(){
  float a, b, c, area, s;
  printf("Enter three sides: ");
  scanf("%f %f %f", &a, &b, &c);

  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("Area = %.2f", area);
  return 0;
}

