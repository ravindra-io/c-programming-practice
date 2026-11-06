/* Q32: Positive Negative Zero 
   Desc: Check positive, negative or zero 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int n; 
   printf("Enter a number: "); 
   scanf("%d", &n); 
   if (n > 0) { 
      printf("%d is Positive number", n); 
   } else if (n < 0) { 
      printf("%d is Negative number", n); 
   } else { 
      printf("%d is Zero", n); 
   } 
   return 0; 
} 
