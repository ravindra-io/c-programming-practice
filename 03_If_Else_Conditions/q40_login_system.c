/* Q40: Login System Simulation 
   Desc: Nested if login with id 101 and pass 9999 
   Author: Ravindra Yadav */ 
#include <stdio.h> 
int main() { 
   int user_id, password; 
   printf("Enter user Id: "); 
   scanf("%d", &user_id); 
   if (user_id == 101) { 
      printf("Enter Password: "); 
      scanf("%d", &password); 
      if (password == 9999) { 
         printf("Login Successful!"); 
      } else { 
         printf("Wrong Password"); 
      } 
   } else { 
      printf("Wrong Id, try again"); 
   } 
   return 0; 
} 
