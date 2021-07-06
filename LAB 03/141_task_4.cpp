#include <bits/stdc++.h>

using namespace std;
double unitPrice = 10, discountPercent = 10.3;
double getSellingPrice(int nos)
{
    return (unitPrice * (1 - discountPercent / 100)) * nos;
}
int main()
{
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    cout << getSellingPrice(1) << endl;
}
