 /*     ===================
         SORTING ALGORITHM
        ===================

       Let ARR be the array of size N with 0s, 1s and 2s.

       Let variable zero_ending = -1 and one_ending

       1). loop for i = 0 to n
       2).      if ARR[i] = 0 ,then
       3).          zero_ending = zero_ending + 1
       4).          swap ARR[i] and ARR[zero_ending]
       5). set one_ending = zero_ending
       6). loop for i = 0 to n
       7).      if ARR[i] = 1 ,then
       8).          one_ending = one_ending + 1
       9).          swap ARR[i] and ARR[zero_ending]

*/

#include<stdio.h>

int main(){
    int arr_count,arr[100];
    int one_ending,zero_ending=-1;

    // READING
    scanf("%d",&arr_count);
    for(int i=0;i<arr_count;i++){
        scanf("%d",&arr[i]);
    }

    // SORTING
    for(int i=0; i<arr_count;i++){
        if(arr[i]==0){
            zero_ending++;
            int temp = arr[i];
            arr[i]=arr[zero_ending];
            arr[zero_ending]=temp;
        }
    }

    one_ending = zero_ending;

    for(int i=0; i<arr_count;i++){
        if(arr[i]==1){
            one_ending++;
            int temp = arr[i];
            arr[i]=arr[one_ending];
            arr[one_ending]=temp;
        }
    }

   // PRINTING
   for(int i=0;i<arr_count;i++){
       printf("%d ",arr[i]);
   }
printf("\n");
return 0;
}