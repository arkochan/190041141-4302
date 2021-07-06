#include <bits/stdc++.h>

using namespace std;
class Counter
{
    long long incrementstep;
    long long count;

public:
    Counter(long long incrementset = 1) : incrementstep(incrementset), count(0) {}
    void setIncrementStep(int step_val)
    {
        incrementstep = step_val;
    }
    void increment()
    {
        count += incrementstep;
    }
    void resetcount()
    {
        count = 0;
    }
    long long getcount()
    {
        return count;
    }
};
int main()
{
    Counter counter1(15);
    Counter counter2;
    counter1.increment();
    counter1.increment();
}
