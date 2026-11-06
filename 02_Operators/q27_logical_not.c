/* Q27: Logical NOT Check 
   Desc: Print 1 if number is not zero 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int n, check; 
   printf("Enter a Number: "); 
   scanf("%d", &n); 
   check = !(n == 0) ? 1 : 0; 
   printf("%d", check); 
   return 0; 
} 
