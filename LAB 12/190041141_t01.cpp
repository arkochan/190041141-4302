#include "bits/stdc++.h"

using namespace std;
template <class T>
class my_stack
{
public:
    long long MAX_SIZE;
    my_stack(T n = 100)
    {
        MAX_SIZE = n;
        arr = (T *)malloc(sizeof(T) * MAX_SIZE);
    }
    void push(T input)
    {
        if (MAX_SIZE - 1 == ind)
            cout << "Overflow" << endl;
        else
            arr[++ind] = input;
    }
    T peek()
    {
        return arr[ind];
    }
    void pop()
    {
        if (ind > -1)
            ind--;
    }
    long long size()
    {
        return ind + 1;
    }

private:
    T *arr;
    long long ind = -1;
};

int main()
{
    my_stack<int> st;
    st.push(2);
    st.peek();
    st.pop();
}
