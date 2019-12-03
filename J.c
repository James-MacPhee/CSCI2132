//James MacPhee - Assignment #7 - J.c 
////This program 
//Nov.22nd/2018
#include <stdio.h>

int main(){
	
	int m,n;
	while(1){
		scanf("%d",&m);
		scanf("%d",&n);
		if(n==0){
			printf("End of Input\n");
			break;	
		}
		else if(m==0){
			printf("Permutations of %d:\n",n);
			permutateAll(n);
		}
		else{
			printf("Permutation of %d number %d:\n",n,m);
			if(m<=factorial(n)){
				permutate(n,m);	
			}
		}
	}
	return 0;
}
int factorial(int n){
	if(n==0) return 1;
	return n*factorial(n-1);
}
int permutateAll(int n){
	int arr[n],i,j;
	for(i=1;i<=n;i++) arr[i-1]=i;
	for(i=0;i<factorial(n);i++){
		for(j=0;j<n;j++) printf(" %d",arr[j]);
		printf("\n");
		nextPerm(arr,n);
	}
}
int permutate(int n,int m){
	int arr[n],i,j;
	for(i=1;i<=n;i++) arr[i-1]=i;
	for(i=1;i<m;i++) nextPerm(arr,n);
	for(j=0;j<n;j++) printf(" %d",arr[j]);
	printf("\n");
}
int nextPerm(int arr[],int n){
	int a=n-1,b=n-1;
	while(a>0 && arr[a-1]>=arr[a]) a--;
	if(a<=0) return 0;
	while(arr[b]<=arr[a-1]) b--;
	int c=arr[a-1];
	arr[a-1]=arr[b];
	arr[b]=c;
	b=n-1;
	while(a<b){
		c=arr[a];
		arr[a]=arr[b];
		arr[b]=c;
		a++;
		b--;
	}
	return 1;
} 
