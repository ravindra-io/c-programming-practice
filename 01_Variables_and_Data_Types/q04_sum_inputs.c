/* Q04: Sum of Two User Inputs 
   Desc: Read two ints, store their sum, print it 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int num1, num2, sum; 
   printf("Enter first Number: "); 
   scanf("%d", &num1); 
   printf("Enter Second Number: "); 
   scanf("%d", &num2); 
   sum = num1 + num2; 
   printf("Sum = %d", sum); 
   return 0; 
} 
