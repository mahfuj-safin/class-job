/**
 * Algorithm: Find Maximum Data and Location
 *
 * step-1: start
 * step-2: declare int variables n, i, MAX, LOC.
 * step-3: Declare an array DATA[n].
 * step-5: for i = 0 to n-1 and input DATA[i]
 * step-6: set MAX = DATA[0] and LOC = 0
 * step-7: for i = 1 to n-1 
 *    if DATA[i] > MAX then set MAX = DATA[i] and LOC = i
 * step-8: print MAX and LOC
 * step-9: stop
 * 
 * */

#include <stdio.h>
int main(){
  int n, i, MAX, LOC;

  // input number of elements
  printf("Enter the number of elements:");
  scanf("%d", &n);

  int DATA[n];

// Input array elements
  printf("Enter the elements:\n ");
  for (i = 0; i < n; i++){
    scanf("%d", &DATA[i]);
  }


  MAX = DATA[0];
  LOC = 0;
  for (i = 1; i < n; i++){
    if (DATA[i] > MAX){
      MAX = DATA[i];
      LOC = i;
    }
  }
  printf("Maximum Value: %d\n", MAX);
  printf("Location: %d\n", LOC);
  return 0;
}