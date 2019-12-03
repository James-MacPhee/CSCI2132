//James MacPhee - CSCI2132 - Assignment #5/E.c
//This program takes input and extracts all the words and prints them out on a new line
//Nov.1st/2018
#include <stdio.h>

int main(){
	int state=0;
	char c = getchar();
	while(c!=EOF){
		if(state==0){
			if((c>='a' && c<='z') || (c>='A' && c<='Z')){
				putchar(c);
				state=1;
			}
		}
		else{
			if((c>='a' && c<='z') || (c>='A' && c<='Z')) putchar(c);
			else{ 
				printf("\n");
				state=0;
			}
		}
		c=getchar();
	}
	return 0;
}
