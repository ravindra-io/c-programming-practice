/* Q18: Circle Area and Circumference 
   Desc: Circle area and circumference with radius 5 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
#define PI 3.14 
int main() { 
   int radius = 5; 
   float area, circum; 
   area = PI * radius * radius; 
   circum = 2 * PI * radius; 
   printf("Area of Circle is %.2f\n", area); 
   printf("Circumference is %.2f", circum); 
   return 0; 
} 
