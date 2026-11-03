/**
 * Algorithm:
 * 
 * 
 * step 1: start
 * step 2: declare a, b, sum and difference
 * step 3: input a, b
 * step 4: calculate sum = a + b
 * step 5: calculate difference = a - b
 * step 6 : print sum and difference
 * step 7: stop
 * 
 */

 #include <stdio.h>
 int main(){
   int a, b, sum, difference;
   printf("Enter Two Numbers: ");
   scanf("%d %d", &a, &b);

   sum = a + b;
   difference = a - b;

   printf("Sum = %d\n", sum);
   printf("Difference = %d", difference);
   return 0;
 }