#include <bits/stdc++.h>

using namespace std;

class A
{
public:
    void xd() { cout << 1 << endl; };
};
class B : public A
{
public:
    void xd() { cout << 2 << endl; };
};
class C : public B
{
public:
    void xd() { cout << 3 << endl; };
};

int main()
{
    A a;
    B b;
    C c;
    B *bp = &c;
    bp->xd();
}
