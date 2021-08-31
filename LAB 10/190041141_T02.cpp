#include <bits/stdc++.h>

using namespace std;

class StringArray
{
public:
    int count = 0;
    string *arr;
    StringArray()
    {
        arr = new string[128];
    }
    void show()
    {
        for (int i = 0; i < count; i++)
        {
            cout << arr[i] << endl;
        }
        cout << "-----------------------" << endl;
    }
    void add(string s)
    {

        arr[count++] = s;
    }
    void edit(int n, string x)
    {
        arr[n] = x;
    }

    //private:
    //    StringArray operator=(StringArray &ob1) {}
    //    StringArray(StringArray &ob1) {}
};
class StringArray2
{
public:
    int count = 0;
    string *arr;
    StringArray2()
    {
        arr = new string[128];
    }
    //new user defined copy constructor
    StringArray2(StringArray2 &ob1)
    {
        count = ob1.count;
        arr = new string[128];
        for (int i = 0; i < count; i++)
        {
            arr[i] = ob1.arr[i];
        }
    }
    void operator=(StringArray2 &ob1)
    {
        //arr = ob1.arr; this line is avoided due to user defined assignment op
        count = ob1.count;
        for (int i = 0; i < count; i++)
        {
            arr[i] = ob1.arr[i];
        }
    }
    void show()
    {
        for (int i = 0; i < count; i++)
        {
            cout << arr[i] << endl;
        }
        cout << "-----------------------" << endl;
    }
    void add(string s)
    {
        arr[count++] = s;
    }
    void edit(int n, string x)
    {
        arr[n] = x;
    }
};
int main()
{
    //StringArray ob1, ob3;
    //ob1.add("arko");
    //ob1.add("and");
    //ob1.add("friends");
    //StringArray ob2 = ob1;
    //ob1.show();
    //ob2.show();
    //ob1.edit(0, "alvee");
    //ob1.show();
    //ob2.show();
    //ob3 = ob1;
    //ob3.show();
    //ob1.edit(0, "Arif");
    //ob3.show();

    StringArray2 obe1;
    obe1.add("arko");
    obe1.add("and");
    obe1.add("friends");
    StringArray2 obe2 = obe1;
    obe1.show();
    obe2.show();
    obe1.edit(0, "alvee");
    obe1.show();
    obe2.show();
    StringArray2 obe3;
    obe3 = obe1;
    obe3.show();
    obe1.edit(0, "Arif");
    obe1.show();
    obe3.show();
}
