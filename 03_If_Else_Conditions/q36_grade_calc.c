/* Q36: Grade Calculator 
   Desc: Grade A B C D from marks 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int marks; 
   printf("Enter your marks: "); 
   scanf("%d", &marks); 
   if (marks >= 90) { 
      printf("Grade A"); 
   } else if (marks >= 75) { 
      printf("Grade B"); 
   } else if (marks >= 50) { 
      printf("Grade C"); 
   } else { 
      printf("Grade D"); 
   } 
   return 0; 
} 
