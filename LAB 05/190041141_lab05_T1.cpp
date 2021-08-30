#include <bits/stdc++.h>

using namespace std;

class Coordinate
{
    float x, y;

public:
    Coordinate(float xi, float yi) : x(xi), y(yi) {}
    Coordinate() : x(0), y(0) {}
    float getDistance(Coordinate c)
    {
        return sqrt((x - c.x) * (x - c.x) + (y - c.y) * (y - c.y));
    }
    float getDistance()
    {
        return sqrt(x * x + y * y);
    }
    void move_x(float val)
    {
        x += val;
    }
    void move_y(float val)
    {
        y += val;
    }
    void move(float val)
    {
        move_x(val);
        move_y(val);
    }
    bool operator==(Coordinate c)
    {
        return getDistance() == c.getDistance();
    }
    bool operator>(Coordinate c)
    {
        return getDistance() > c.getDistance();
    }
    bool operator<(Coordinate c)
    {
        return getDistance() < c.getDistance();
    }
    bool operator<=(Coordinate c)
    {
        return getDistance() <= c.getDistance();
    }
    bool operator>=(Coordinate c)
    {
        return getDistance() >= c.getDistance();
    }
    bool operator!=(Coordinate c)
    {
        return getDistance() != c.getDistance();
    }
    Coordinate operator++()
    {
        x++;
        y++;
        return (*this);
    }
    Coordinate operator++(int)
    {
        Coordinate temp = *this;
        x++;
        y++;
        return temp;
    }
    Coordinate operator--()
    {
        x--;
        y--;
        return (*this);
    }
    Coordinate operator--(int)
    {
        Coordinate temp = *this;
        x--;
        y--;
        return temp;
    }
    void display()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};
int main()
{
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    Coordinate c(15, 29), c2;

    c2 = c--;
    c2.display();

    c2 = --c;
    c.display();
}
