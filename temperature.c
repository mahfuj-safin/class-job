/**
 * step-1: start. 
 * step-2: declare float c, f.
 * step-3: input temperature in celsius c.
 * step-4: Calculate F = (c * 9/5) + 32.
 * step-5: Output f.
 * step-6: stop.
 */

 #include <stdio.h>
 int main(){
   float c, f;
   printf("Enter Temperature in celsius: ");
   scanf("%f", &c);

   f = (c * 9 / 5) + 32;
   printf("Temperature in fahrenheit = %.2f\n", f);
   return 0;
 }


 /**
 * step-1: start. 
 * step-2: declare float c, f.
 * step-3: input temperature in fahrenheit f.
 * step-4: Calculate c = (f - 32) * 5/9.
 * step-5: Output c.
 * step-6: stop.
 */

  #include <stdio.h>
 int main(){
   float c, f;
   printf("Enter Temperature in fahrenheit: ");
   scanf("%f", &f);

   c = (f - 32) * 5/9;
   printf("Temperature in celsius = %.2f\n", c);
   return 0;
 }