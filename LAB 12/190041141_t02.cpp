#include <bits/stdc++.h>

using namespace std;

class out_of_bound
{
};
template <typename T, typename L, typename N>
T amax(T *array, L size, N n)
{
    if (n > size)
        throw out_of_bound();
    T srt[size];
    for (L i = 0; i < size; i++)
    {
        srt[i] = array[i];
    }
    sort(srt, srt + size);
    return srt[size - n];
}

int main()
{
    long long i[] = {22, 34, 6, 2, 1, 5, 56, 1, 6, 3, 2, 6, 6, 3}, j, n;
    long long x = 0, t, inp, sum = 0;

    cout << amax(i, 14, 1) << endl;
    cout << amax(i, 14, 2) << endl;
    cout << amax(i, 14, 3) << endl;
    cout << amax(i, 14, 4) << endl;
}
