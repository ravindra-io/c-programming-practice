/* Q39: Triangle Type 
   Desc: Triangle type by side lengths 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int a, b, c; 
   printf("Enter Sides of Triangle: "); 
   scanf("%d %d %d", &a, &b, &c); 
   if (a == b && b == c) { 
      printf("Equilateral Triangle"); 
   } else if (a == b || b == c || a == c) { 
      printf("Isosceles Triangle"); 
   } else { 
      printf("Scalene Triangle"); 
   } 
   return 0; 
} 
