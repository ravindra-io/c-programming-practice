/* Q19: Largest of Three Using Ternary 
   Desc: Largest of three using ternary operator 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int a, b, c, max; 
   printf("Enter three numbers: "); 
   scanf("%d %d %d", &a, &b, &c); 
   max = (a > b) ? a : b; 
   max = (max > c) ? max : c; 
   printf("Largest Number is %d", max); 
   return 0; 
} 
