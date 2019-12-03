#include <stdio.h>

int main(){
   
   int n;
   scanf("%d",&n);
   while(n>0){
      int i,a,b,c;
      double max,min;
      for(i=0;i<n;i++){
         if(i==0){ 
            scanf("%lf",&max);
            min = max;
         }
         else{
            double temp;
            scanf("%lf",&temp);
            if(temp>max) max = temp;
            if(temp<min) min = temp;
         }
      }
      printf("Min: %.4lf Max: %.4lf\n",min,max);
      scanf("%d",&n);
   }
}
