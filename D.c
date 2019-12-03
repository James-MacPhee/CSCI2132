//James MacPhee - CSCI2110 - Assignment#4/Ex.5
//This program finds the average(mean) and median of user inputted numbers
//Oct.24th/2018
#include <stdio.h>

//I adapted the merge from class to make it more readable for me
void merge(double arr[],int lower,int middle,int upper){
   
   int a,b,c;
   int n1 = middle-lower+1;
   int n2 = upper-middle;
   double temp1[n1],temp2[n2];

   for(a=0;a<n1;a++) temp1[a]=arr[lower+a];
   for(b=0;b<n2;b++) temp2[b]=arr[middle+b+1];

   a=0;b=0;c=lower;

   while(a<n1&&b<n2){
      if(temp1[a]<=temp2[b]){
         arr[c++]=temp1[a++];  
      }
      else{
         arr[c++] = temp2[b++];
      } 
   }
   while(a<n1){
      arr[c++]=temp1[a++];
   }
   while(b<n2){
      arr[c++]=temp2[b++];
   }
}

//I adapted the mergeSort from class to make it more readable for me
void mergeSort(double arr[],int a,int b){
   if(a<b){
      int c=(a+b)/2;
      mergeSort(arr,a,c);
      mergeSort(arr,c+1,b);
      merge(arr,a,c,b);}
}

//Main method
int main(){

   int size;
   scanf("%d", &size);
   while(size>0){
      int i=0;
      double arr[size];
      for(i=0;i<size;i++){
         scanf("%lf",&arr[i]);	 
      }
      //Calculating and printing average
      double avg=0;
      for(i=0;i<size;i++){
         avg+=arr[i];
      }
      avg = avg/size;
      printf("Avg: %.3lf ",avg);
      
      mergeSort(arr,0,size-1);

      //Calculating and printing median
      double med;
      if(size==0) med=arr[0];
      else if(size%2!=0) med=arr[(size-1)/2];
      else med=(arr[size/2]+arr[size/2-1])/2;
      printf("Med: %.3lf\n",med);
      scanf("%d",&size);
   }
   return 0; 
}

