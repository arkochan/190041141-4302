#include <bits/stdc++.h>

using namespace std;
class clsA
{
public:
    virtual void vir()
    {
        cout << "Base vir" << endl;
    }
    void novir()
    {
        cout << "Base novir" << endl;
    }
};
class clsB : public clsA
{
public:
    void vir()
    {
        cout << "Der vir" << endl;
    }
    void novir()
    {
        cout << "Der novir" << endl;
    }
};
int main()
{
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    clsB B1, B2;
    clsA A1, A2;
    clsA *Ap1 = &B1;
    Ap1->vir();
    Ap1->novir();
    B1.vir();
    B1.novir();
}
