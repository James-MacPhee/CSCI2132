//James MacPhee - CSCI2132 -  Assignment#4/Ex.4
//This program
//Oct.24th/2018
 
#include <stdio.h>

int main(){
   
   char c;
   int counter = 0;
   while((c = getchar()) != EOF){
      if(c == '\n'){
         printf(":%d", counter);
         counter=-1;
      }
      putchar(c);
      counter++;
   }
}
