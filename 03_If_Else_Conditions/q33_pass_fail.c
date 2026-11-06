/* Q33: Pass or Fail 
   Desc: Pass if marks 33 or more 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int marks; 
   printf("Enter your marks: "); 
   scanf("%d", &marks); 
   if (marks >= 33) { 
      printf("Pass"); 
   } else { 
      printf("Fail"); 
   } 
   return 0; 
} 
