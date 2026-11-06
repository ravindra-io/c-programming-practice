/* Q38: Vowel or Consonant 
   Desc: Vowel or consonant check 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   char chr; 
   printf("Enter a Character: "); 
   scanf(" %c", &chr); 
   if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U') { 
      printf("%c is a Vowel", chr); 
   } else { 
      printf("%c is a Consonant", chr); 
   } 
   return 0; 
} 
