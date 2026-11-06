/* Q09: Area of Rectangle 
   Desc: Rectangle area equals length times width 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int length, width, area; 
   printf("Enter Length: "); 
   scanf("%d", &length); 
   printf("Enter Width: "); 
   scanf("%d", &width); 
   area = length * width; 
   printf("Area of rectangle = %d", area); 
   return 0; 
} 
