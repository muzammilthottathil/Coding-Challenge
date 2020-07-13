 /*     ===================
         SORTING ALGORITHM
        ===================

      

*/

#include<stdio.h>

int main(){
    int arr_count,arr[100];
    int zero_ending=-1;

    // READING
    scanf("%d",&arr_count);
    for(int i=0;i<arr_count;i++){
        scanf("%d",&arr[i]);
    }

   

   // PRINTING
   for(int i=0;i<arr_count;i++){
       printf("%d ",arr[i]);
   }
printf("\n");
return 0;
}