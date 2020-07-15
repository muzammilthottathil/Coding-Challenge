#include <bits/stdc++.h>
using namespace std;

    /* ==============
        INPUT FORMAT
       ============== 
       
       first-line : number of elements of in the array (n)
       second-line : arrray (ar) elements space seperated
       third-line : frequency (k)

       ===========
        Algorithm
       ===========

       Let the array be AR with size of N , frequency to find say K

       1). Loop for i=0 to n in AR
       2).      store freq as map(AR[i],frequency)
       3). Loop for i=0 to n in AR
       4).      if (frequency >= K)
       5).          print AR in map {for frequency}
       
       */


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