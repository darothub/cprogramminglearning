#include "cs50.c"
#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{

 char str[20] = "#";
 string height = get_string("Hello what u want");
 printf("What height of pyramid \n");
 int user;
 if(scanf("%d", &user))
 {
     for (int i =0; i< 8; i++)
  {
      if(user <= 0 || user > 8 )
      {
          printf("Height: %d \n", user);
          printf("Provide value between 1 and 8 \n");
          scanf("%d", &user);
          
      }
      
      
  }
    printf("\n");
    int i;
    

    for (i = 1; i <= user; i++) { 
        for(int k = user; k > i; k--){
            putchar(' ');
        }
        int j;
        for (j = 0; j < i; j++) {

            putchar('#');
            
        }
        putchar('\n');
        
    }
  return EXIT_FAILURE;
 }
  


  
}