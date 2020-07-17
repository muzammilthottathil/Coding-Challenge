#include <bits/stdc++.h>
using namespace std;

string angryProfessor(int k, int st_arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (st_arr[i] < 1)
            count++;
    }
    if (count < k)
        return "YES";
    return "NO";
}

int main()
{

    int test_no = 0;
    cin >> test_no;
    int k_arr[test_no], n[test_no];
    for (int i = 0; i < test_no; i++)
    {
        cin >> n[i] >> k_arr[i];
        int st[n[i]];
        for (int j = 0; j < n[i]; j++)
            cin >> st[j];

        cout << angryProfessor(k_arr[i], st, n[i]) << endl;
    }

    return 0;
}