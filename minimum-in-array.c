/**
 * step-1: start
 * step-2: declare n, i, MIN, LOC
 * step-3: declare an array DATA[n]
 * step-4: for i = 0 to n-1 and input DATA[i]
 * step-5: set MIN = DATA[0] and LOC = 0
 * step-6: for i = 1 to n-1 and if DATA[i] < MIN then set MIN = DATA[i] and LOC = i
 * step-7: print MIN and LOC
 * step-8: stop
 */

#include <stdio.h>
int main(){
  int n, i, MIN, LOC;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int DATA[n];
  printf("Enter array elements: \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &DATA[i]);
  }

  MIN = DATA[0];
  LOC = 0;
  for (i = 1; i < n; i++){
    if(DATA[i] < MIN){
      MIN = DATA[i];
      LOC = i;
    }
  }
  printf("The min value is = %d \n", MIN);
  printf("The min value location = %d \n", LOC);
  return 0;
}