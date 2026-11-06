/* Q31: Even or Odd Check 
   Desc: Check even or odd 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int n; 
   printf("Enter a number: "); 
   scanf("%d", &n); 
   if (n % 2 == 0) { 
      printf("%d is Even Number", n); 
   } else { 
      printf("%d is Odd Number", n); 
   } 
   return 0; 
} 
