/**
 * Algorithm:
 *
 * step 1: start
 * step 2: Declare radius and area
 * step 3: input radius
 * step 4: Calculate area = 3.1416 * radius * radius
 * step 5: print area
 * step 6: stop
 */

#include <stdio.h>
int main() {
  float radius, area;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area = 3.1416 * radius * radius;

  printf("Area of the circle = %.2f", area);
  return 0;
}