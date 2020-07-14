# Problem Description

You are given a binary array, ie it contains only 0s and 1s. You have to sort the array

### Constraints

- Do in O(n)
- Do not count the number of zeoes and ones.

### Input Format

1st line :- Number of elements in the array

2nd line :- 0s and 1s as input by space seperated

### Output Format

Sorted Array

# Algorithm

        Let ARR be the array of size N with 0s and 1s.

        Let variable zero_ending = -1

       1). loop for i = 0 to n
       2).      if ARR[i] = 0 ,then
       3).          zero_ending = zero_ending + 1
       4).          swap ARR[i] and ARR[zero_ending]

# Code in C

```c

#include<stdio.h>

int main(){
    int arr_count,arr[100];
    int zero_ending=-1;

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

   // PRINTING
   for(int i=0;i<arr_count;i++){
       printf("%d ",arr[i]);
   }
printf("\n");
return 0;
}

```
