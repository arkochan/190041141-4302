#include <bits/stdc++.h>

using namespace std;
class Clalculator
{
    int val;

public:
    Clalculator() : val(0) {}
    Clalculator(int i) : val(i) {}
    ~Clalculator() {}

    void add(int i)
    {
        val += i;
    }
    void sub(int i)
    {
        val -= i;
        display();
    }
    void mult(int i)
    {
        val -= i;
    }
    void div(int i)
    {
        val /= i;
    }
    int getValue()
    {
        return val;
    }
    void setValue(int i)
    {
        val = i;
    }
    void display()
    {
        cout << "Calculator display: " << val << endl;
    }
};
int main()
{
    Clalculator cal;
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    string op;
    cin >> op;
    if (op == "add")
    {
        cin >> n;
        cal.add(n);
        cal.display();
    }
    else if (op == "subtract")
    {
        cin >> n;
        cal.sub(n);
        cal.display();
    }
    else if (op == "multiply")
    {
        cin >> n;
        cal.mult(n);
        cal.display();
    }
    else if (op == "divide")
    {
        cin >> n;
        cal.div(n);
        cal.display();
    }
    else if (op == "clear")
    {
        cal.setValue(0);
        cal.display();
    }
}
