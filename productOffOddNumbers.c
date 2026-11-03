/**
 * Algorithm:
 * 
 * 
 * Step 1: Start
 * Step 2: Declare i and product
 * Step 3: Initialize product = 1
 * Step 4: Repeat from i = 1 to 10
 * Step 5: Check if i % 2 != 0
 * Step 6: If true, calculate product = product * i
 * Step 7: Print product
 * Step 8: Stop
 */

//  program: 

#include <stdio.h>
int main(){
  int i, product = 1;
  for (i = 1; i <= 10; i++){
    if (i%2 != 0){
      product = product * i;
    }
  }
  printf("Product = %d", product);
  return 0;
}