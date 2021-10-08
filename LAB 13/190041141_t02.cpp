#include <iostream>
using namespace std;

namespace ns1
{
    int x = 5;
}

namespace ns2
{
    int x = 6;
}

int main()
{
    cout << ns1::x << endl
         << ns2::x << endl;
}