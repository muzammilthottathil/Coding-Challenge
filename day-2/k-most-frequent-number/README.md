# Problem Description

Give a non empty array of integers, return the k most frequent elements.

### Constraints

- You may assume k is always valid , 1<=k<=number of unique elements.
- Algorithm complexicity must be O(n logn) or better, Where n is the array size.

### Input Format

1st line :- Number of elements of in the array (n)

2nd line :- Arrray (ar) elements space seperated

3rd line :- frequency (k)

### Output Format

Elements k most freq occur

### sample

```
Input : 6
        1 1 1 2 2 3
        2

Output: 2 1

Input : 1
        1
        1

Output: 1
```

# Algorithm

        Let the array be AR with size of N , frequency to find say K

       1). Loop for i=0 to n in AR
       2).      store freq as map(AR[i],frequency)
       3). Loop for i=0 to n in AR
       4).      if (frequency >= K)
       5).          print AR in map {for frequency}

# Code in C++

```cpp

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ,k;

    // Reading number of elements
    cin >> n;

    // Reading the elements of the array
     int *ar = new int[n];
     for(int i=0 ; i<n ; i++)
         cin >> ar[i];

    // Reading frequency k
    cin >> k;

    // Finding and Printing k most frequent elements
    unordered_map<int, int> frequency;
    for(int i=0 ; i<n ; i++)
        frequency[ar[i]]++;

    int result[n];
    unordered_map<int,int>:: iterator p;
    for(p = frequency.begin(); p != frequency.end(); p++)
        if(p->second >= k)
            cout << p->first << " ";

    cout << endl;
    return 0;
}

```
