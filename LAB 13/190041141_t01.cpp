#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6];
    set<int> s;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            s.insert(i);
        else
            arr[i / 2] = i;
    }
    vector<int> vec(10);
    merge(arr, arr + 5, s.begin(), s.end(), vec.begin());

    for (auto i : vec)
        cout << i << endl;
}