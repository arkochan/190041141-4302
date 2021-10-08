#include <bits/stdc++.h>

using namespace std;
enum user_type
{
    tteacher,
    tstudent
};

class User
{
public:
    static User *users[];

protected:
    static int n;
    string username;
    string password;

public:
    virtual void show() = 0;

    virtual void putdata()
    {
        cout << "\n Name: " << username;
        cout << "\n Number: " << password;
    }
    static void display();
    static void read();
    static void write();
    static void add();
    virtual void getdata()
    {
        cin.ignore(10, '\n');
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter number: ";
        cin >> password;
    }
    virtual user_type get_type();
};
int User::n; //current number of employees
User *User::users[100];
class Teacher : public User
{

    string teacherid;
    void show()
    {
        cout << username << endl;
        cout << password << endl;
        cout << teacherid << endl;

        //cin>>
    }
    virtual void getdata()
    {
        User::getdata();
        cin.ignore(10, '\n');
        cout << "Enter teacherid: ";
        cin >> teacherid;
    }
    void putdata()
    {
        cout << "\n Name: " << teacherid;
    }
};
class Student : public User
{
    //...variables
    string studentid;
    string section;

    void show()
    {
        cout << username << endl;
        cout << password << endl;
        cout << studentid << endl;
        cout << section << endl;

        //cin>>
    }
    virtual void getdata()
    {
        User::getdata();
        cin.ignore(10, '\n');
        cout << "Enter studentid: ";
        cin >> studentid;
        cout << "Enter section: ";
        cin >> section;
    }
    void putdata()
    {
        cout << "\n Name: " << studentid;
        cout << "\n Number: " << section;
    }
};
void User::add()
{
    char ch;
    cout << "u to add a user\n"
            "t to add a teacher\n"
            "s to add a student\n"
            "Enter selection: ";
    cin >> ch;
    switch (ch)
    { //create specified User type
    case 't':
        users[n] = new Teacher;
        break;
    case 's':
        users[n] = new Student;
        break;
    default:
        cout << "\nUnknown User type\n";
        return;
    }
    users[n++]->getdata(); //get User data from user
}

void User::write()
{
    int size;
    cout << "Writing" << n << "Users.\n";
    ofstream ouf;    //open ofstream in binary
    user_type etype; //type of each User object
    ouf.open("data.DAT", ios::trunc | ios::binary);
    if (!ouf)
    {
        cout << "\nCan't open file\n";
        return;
    }
    for (int j = 0; j < n; j++) //for every User object
    {                           //get its type
        etype = users[j]->get_type();
        //write type to file
        ouf.write((char *)&etype, sizeof(etype));
        switch (etype) //find its size
        {
        case tteacher:
            size = sizeof(Teacher);
            break;
        case tstudent:
            size = sizeof(Student);
            break;
        } //write User object to file
        ouf.write((char *)(users[j]), size);
        if (!ouf)
        {
            cout << "\nCan't write to file\n";
            return;
        }
    }
}
void User::read()
{
    int size;        //size of User object
    user_type etype; //type of User
    ifstream inf;    //open ifstream in binary
    inf.open("data.DAT", ios::binary);
    if (!inf)
    {
        cout << "\nCan't open file\n";
        return;
    }
    n = 0; //no Users in memory yet
    while (true)
    { //read type of next User
        inf.read((char *)&etype, sizeof(etype));
        if (inf.eof()) //quit loop on eof
            break;
        if (!inf) //error reading type
        {
            cout << "\nCan't read type from file\n";
            return;
        }
        switch (etype)
        { //make new employe
        case tteacher:
            users[n] = new Teacher;
            size = sizeof(Teacher);
            break;
        case tstudent:
            users[n] = new Student;
            size = sizeof(Student);
            break;
        default:
            cout << "\nUnknown type in file\n";
            return;
        } //read data from file into it
        inf.read((char *)users[n], size);
        if (!inf) //error but not eof
        {
            cout << "\nCan't read data from file\n";
            return;
        }
        n++; //count User
    }        //end while
    cout << "Reading" << n << "Users\n";
}
void User::display()
{
    for (int j = 0; j < n; j++)
    {
        cout << (j + 1);              //display number
        switch (users[j]->get_type()) //display type
        {

        case tteacher:
            cout << ".Type: Teacher";
            break;
        case tstudent:
            cout << ".Type: Student";
            break;
        default:
            cout << ".Unknown type";
        }
        users[j]->putdata(); //display employee data
        cout << endl;
    }
}
user_type User::get_type()
{
    if (typeid(*this) == typeid(Teacher))
        return tteacher;
    else if (typeid(*this) == typeid(Student))
        return tstudent;
    else
    {
        cerr << "\nBad User type";
        exit(1);
    }
}
int main()
{
    char ch;
    while (true)
    {
        cout << "a'--add data for an user"
                "\n' d'--display data for all Users"
                "\n' w'--write all user data to file"
                "\n' r'--read all user data from file"
                "\n' x'--exit"
                "\nEnter selection: ";
        cin >> ch;
        switch (ch)
        {
        case 'a': //add an user to list
            User::add();
            break;
        case 'd': //display all Users
            User::display();
            break;
        case 'w': //write Users to file
            User::write();
            break;
        case 'r': //read all Users from file
            User::read();
            break;
        case 'x':
            exit(0); //exit program
        default:
            cout << "\nUnknown command";
        } //end switch
    }     //end while
    return 0;
}
