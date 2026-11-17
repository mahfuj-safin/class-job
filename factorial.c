/**
 * step-1: start.
 * step-2: declare int n, i, fact
 * step-3: input the number n.
 * step-4: set fact = 1
 * step-5: for i = 1 to i <= n; i++ and calculate fact = fact * i.
 * step-6: output fact
 * step-7: stop
 */

 #include <stdio.h>
 int main(){
   int n, i, fact = 1;
   printf("Enter the number: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++){
     fact = fact * i;
   }
   printf("Factorial value = %d", fact);
   return 0;
 }