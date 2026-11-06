/* Q15: All Basic Arithmetic Operations 
   Desc: Print sum, diff, product, quotient, remainder 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int num1, num2; 
   printf("Enter First Number: "); 
   scanf("%d", &num1); 
   printf("Enter Second Number: "); 
   scanf("%d", &num2); 
   printf("Sum = %d\n", num1 + num2); 
   printf("Subtract = %d\n", num1 - num2); 
   printf("Multiply = %d\n", num1 * num2); 
   printf("Division = %d\n", num1 / num2); 
   printf("Modulus = %d", num1 % num2); 
   return 0; 
} 
