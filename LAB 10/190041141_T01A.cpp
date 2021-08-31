#include <bits/stdc++.h>

using namespace std;
class guest_user
{
    string username;
    virtual void login()
    {
        cout << "Temporary Username: ";
        cin >> username;
    }
};
class reg_user : public guest_user
{
    string username, password;
    void login()
    {
        string un_inp, pass_inp;
        cout << "Username:";
        cin >> un_inp;
        cout << "Password:";
        cin >> pass_inp;
        //authenticate(un_inp, pass_inp);
    }
};

int main()
{
    guest_user u1;
    reg_user u2;
}