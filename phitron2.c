#include<stdio.h>
int main (){

   int arr[]={1,2,3,4,5};
   int length = sizeof(arr)/sizeof (arr[0]);
   printf("\n");
   for(int i=0;i<length;i++){

    printf("%d",arr[i]);
   }
   printf("\n");
   for(int i= length-1;i>=0; i--){

    printf("%d",arr[i]);
   }

   return 0;
}
