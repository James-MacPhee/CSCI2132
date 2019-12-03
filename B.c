#include <stdio.h>
#include <math.h>

int main(){
   
   int n;
   scanf("%d",&n);
   while(n>1){
      if(isPrime(n)==0) printf("%d IS PRIME\n",n);
      else printf("%d IS NOT PRIME\n",n);
      scanf("%d",&n);
   }
}
isPrime(int n){
   
   if(n==2) return 0;
   if(n%2==0) return 1;
   int i;
   for(i=3;i<=sqrt((n));i+=2){
      if(n%i==0) return 1;
   }
   return 0;
}
