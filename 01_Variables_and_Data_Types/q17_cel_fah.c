/* Q17: Celsius to Fahrenheit 
   Desc: Convert Celsius to Fahrenheit 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   float celsius, fahrenheit; 
   printf("Enter Celsius Value: "); 
   scanf("%f", &celsius); 
   fahrenheit = celsius * 9 / 5 + 32; 
   printf("Fahrenheit value is: %.2f", fahrenheit); 
   return 0; 
} 
