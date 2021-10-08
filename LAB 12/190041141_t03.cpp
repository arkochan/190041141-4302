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
            throw Overflow();
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
        else
            throw Underflow();
    }
    long long size()
    {
        return ind + 1;
    }

    class Overflow
    {
    };

    class Underflow
    {
    };

private:
    T *arr;
    long long ind = -1;
};

int main()
{
    my_stack<int> st;
    try
    {
        st.push(2);
        st.peek();
        st.pop();
        st.pop();
    }
    catch (my_stack<int>::Overflow)
    {
        cout << "Overflow" << endl;
    }
    catch (my_stack<int>::Underflow)
    {
        cout << "Underflow" << endl;
    }
}
