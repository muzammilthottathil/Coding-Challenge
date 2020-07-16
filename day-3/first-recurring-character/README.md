```cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    char repeated_string;
    unordered_map<char, int> count;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (count[name[i]] > 0)
        {
            repeated_string = name[i];
            break;
        }
        count[name[i]]++;
    }

    cout << repeated_string << endl;

    return 0;
}
```
