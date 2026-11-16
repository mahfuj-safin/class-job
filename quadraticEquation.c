/**
 *
 * step-1: start.
 * step-2: Declare float variables a,b,c, D, x1, x2, real, img.
 * step-3: Input a, b, c value
 * step-4: if a = 0 then print "it's not a Quadratic Equation" go to step 9.
 * step-5: Calculate D = b*b - 4*a*c.
 * step-6: if D > 0 then x1 = (-b + sqrt(D)) / (2*a), x2 = (-b - sqrt(D)) / (2*a), print x1 and x2
 * step-7: else if D = 0 then x1 = -b / (2*a), print x1
 * step-8: else D < 0 then real = -b / (2*a) img = sqrt(-D) / (2*a), print the complex roots.
 * step-9: stop
 *
 */

 #include <stdio.h>
 #include <math.h>
 int main(){
   float a, b, c, D, x1, x2, real, imag;

   printf("Enter the value of a, b and c: ");
   scanf("%f %f %f", &a, &b, &c);

   if(a == 0){
     printf("it's not a quadratic Equation. \n");

   }else{
     D = b * b - 4 * a * c;
     if (D > 0)
     {
       x1 = (-b + sqrt(D)) / 2 * a;
       x2 = (-b - sqrt(D)) / 2 * a;
       printf("Two real roots: x1 = %.2f and x2 = %.2f \n", x1, x2);
     }else if (D == 0){
       x1 = -b / (2 * a);
       printf("One real root: x1 = %.2f \n", x1);
     }else{
       real = -b / (2 * a);
       imag = sqrt(-D) / (2 * a);
       printf("Complex roots: x1 = %.2f + %.2fi and x2 = %.2f - %.2fi \n", real, imag, real, imag);
     }
     
   }
   return 0;
 }