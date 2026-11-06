/* Q14: Type Casting Float to Int 
   Desc: Read float, cast to int, print int part 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   float f; 
   int num; 
   printf("Enter a Float Number: "); 
   scanf("%f", &f); 
   num = (int)f; 
   printf("Int form is %d", num); 
   return 0; 
} 
