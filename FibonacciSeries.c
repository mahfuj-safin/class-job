/**
 * step-1: start
 * step-2: declare int variables n, i, a, b, c.
 * step-3: Input The number of terms n.
 * step-4: set a = 0, b =1.
 * step-5: for i = 1 to n: print a, c = a + b, a = b, b = c
 * step-6: stop
 */


 #include <stdio.h>
 int main(){
   int n, i, a = 0, b = 1, c;
   printf("Enter the number of terms: ");
   scanf("%d", &n);

  
   printf("Fibonacci Series: ");
   for (i = 1; i <= n; i++){
     printf("%d ", a);

     c = a + b;
     a = b;
     b = c;
   }

   return 0;
 }