/* Q25: Range Check With AND 
   Desc: Print 1 if number between 10 and 20 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int n, check; 
   printf("Enter a Number: "); 
   scanf("%d", &n); 
   check = (n > 10 && n < 20) ? 1 : 0; 
   printf("%d", check); 
   return 0; 
} 
