#include <bits/stdc++.h>
using namespace std;
class RationalNumber
{
    long long numerator, denominator;

public:
    void assign(int numerator_inp, int denominator_inp)
    {
        if (!denominator)
        {
            cout << "INVALID" << endl;
            return;
        }
        numerator = numerator_inp;
        denominator = denominator_inp;
    }
    double convert()
    {
        return (double)numerator / denominator;
    }
    void invert()
    {
        if (!numerator)
        {
            cout << "INVALID" << endl;
            return;
        }
        swap(denominator, numerator);
    }
    void print()
    {
        cout << "The Rational Number is " << numerator << "/" << denominator << endl;
    }
};

int main()
{
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    cin >> n;
}
