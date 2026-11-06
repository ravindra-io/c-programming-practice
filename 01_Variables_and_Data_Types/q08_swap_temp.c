/* Q08: Swap Two Numbers Using Temp 
   Desc: Swap x and y using temp variable 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int x, y, temp; 
   printf("Enter x: "); 
   scanf("%d", &x); 
   printf("Enter y: "); 
   scanf("%d", &y); 
   temp = x; 
   x = y; 
   y = temp; 
   printf("x = %d\ny = %d", x, y); 
   return 0; 
} 
