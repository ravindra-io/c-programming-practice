/* Q24: Equality Check With Ternary 
   Desc: Check equality of two numbers, print 1 or 0 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int a, b, result; 
   printf("Enter two numbers: "); 
   scanf("%d %d", &a, &b); 
   result = (a == b) ? 1 : 0; 
   printf("%d", result); 
   return 0; 
} 
