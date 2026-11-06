/* Q26: Divisibility Check With OR 
   Desc: Print 1 if divisible by 2 or 5 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int n, check; 
   printf("Enter a Number: "); 
   scanf("%d", &n); 
   check = (n % 2 == 0 || n % 5 == 0) ? 1 : 0; 
   printf("%d", check); 
   return 0; 
} 
