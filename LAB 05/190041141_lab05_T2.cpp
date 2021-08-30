#include <bits/stdc++.h>
using namespace std;

class Float
{
private:
    float data;

public:
    Float(float f) : data(f) {}
    Float() : data(0) {}
    void setData(float a)
    {
        data = a;
    }
    float getData() const
    {
        return data;
    }
    void display() const
    {
        cout << data << endl;
    }

    Float operator+(Float c) const
    {
        Float temp(data + c.data);
        return temp;
    }

    Float operator-(Float c) const
    {
        Float temp(data - c.data);
        return temp;
    }
    Float operator*(Float c) const
    {
        Float temp(data * c.data);
        return temp;
    }
    Float operator/(Float c) const
    {
        if (c.data)
        {
            Float temp(data / c.data);
            return temp;
        }
        else
        {
            cout << "error" << endl;
            exit(0);
        }
    }
    operator int() const
    {
        return (int)data;
    }
};

int main()
{
    Float a, b, c;
    a.setData(2.5);
    b.setData(3.1);
    a.display();
    b.display();

    c = a + b;
    c.display();

    c = a - b;
    c.display();

    c = a * b;
    c.display();

    int x = c;
    cout << x << endl;
    c = a / b;
    c.display();
}