/* Q21: Quotient and Remainder 
   Desc: Quotient and remainder with divide-by-zero check 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int a, b; 
   printf("Enter two numbers: "); 
   scanf("%d %d", &a, &b); 
   if (b != 0) { 
      printf("Quotient = %d\nRemainder = %d", a / b, a % b); 
   } else { 
      printf("Cannot divide by zero"); 
   } 
   return 0; 
} 
