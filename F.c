//James MacPhee - CSCI2132 - Assignment #5/F.c
//This program checks a user specified numbers of digits to see if they are luhn sums.
//Then prints the result for each number. 
//Nov.1st/2018
#include <stdio.h>

int luhn_checksum(int len,int a[]);

int main(){
	
	int num,i;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		char a[50];
		scanf("%50s",&a);
		int size=0,j;
		for(j=0;j<50;j++){
			if(a[j]=='\0') break;
			size++;
		}
		int b[size];
		for(j=0;j<size;j++) b[j]=a[j]-'0';
		if(luhn_checksum(size,b)==1) printf("PASS\n");
		else printf("FAIL\n");
	}
	return 0;
}

int luhn_checksum(int len,int a[]){
	
	int i,sum=0;
	if(len%2==0){
		for(i=0;i<len;i+=2){
			a[i]*=2;
			if(a[i]>=10) a[i]=1+a[i]%10;
		}
	}
	else{
		for(i=1;i<len;i+=2){
			a[i]*=2;
			if(a[i]>=10) a[i]=1+a[i]%10;
	}
	}
	for(i=0;i<len;i++) sum+=a[i];
	if(sum%10==0) return 1;
	else return 0;
}
