#include <bits/stdc++.h>

using namespace std;
class User
{
    string username;
    string password;
    virtual void showmenu() = 0;
};
class Teacher : public User
{
    //...variables
    void showmenu()
    {
        cout << "1.View students" << endl;
        cout << "2.Mark student" << endl;
        cout << "3.Show copies" << endl;
        //cin>>
    }
};
class Student : public User
{
    //...variables
    void showmenu()
    {
        cout << "1.View task" << endl;
        cout << "2.Submit task" << endl;
        //cin>>
    }
};
int main()
{
    //User u1; //error
    Teacher t1;
    Student s1;
}
