/**
 * step 1: start
 * step 2: input a, b, c
 * step 3: if a > b and a > c then, a is largest number
 * step 4: else if b> a and b > c then, b is largest number
 * step 5: else c is largest number
 * step 6: print largest number
 * step 7: stop
 * 
 */

 #include <stdio.h>
 int main(){
   int a, b, c;
   printf("Enter three numbers:");
   scanf("%d %d %d", &a, &b, &c);
   if ( a > b && a > c){
     printf("%d largest number = %d", a);
   }else if(b > a && b > c){
     printf(" Largest number = %d", b);

   }else{
    printf(" Largest number = %d", c);
   }
 }