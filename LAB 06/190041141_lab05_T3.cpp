#include <bits/stdc++.h>

using namespace std;
class ZooAnimal
{
    char nameOfAnimal[50];
    int birthYear;
    int cageNumber;
    float weightData;
    int height;

public:
    ZooAnimal() : birthYear(2021), cageNumber(1), weightData(1), height(1)
    {
        strcpy(nameOfAnimal, "");
    }
    void setname(char str[])
    {
        strcpy(nameOfAnimal, str);
    }
    void setname(const char *str)
    {
        strcpy(nameOfAnimal, str);
    }
    void setby(int by)
    {
        birthYear = by;
    }
    void setcn(int n)
    {
        cageNumber = n;
    }
    void setw(float n)
    {
        weightData = n;
    }
    void seth(int n)
    {
        height = n;
    }
    char *getname()
    {
        return nameOfAnimal;
    }
    int getBY()
    {
        return birthYear;
    }
    int getcn()
    {
        return cageNumber;
    }
    float getw()
    {
        return weightData;
    }
    int geth()
    {
        return height;
    }
    void getInformation()
    {

        cout
            << "nameOfAnimal " << nameOfAnimal << endl
            << "birthYear " << birthYear << endl
            << "cageNumber " << cageNumber << endl
            << "weight " << weightData << endl
            << "height " << height << endl;
    }

    int operator==(int data)
    {
        return weightData == data;
    }
    void operator--(int dec)
    {
        height -= dec;
    }
    /// A > B
    bool operator>(ZooAnimal b)
    {
        return birthYear < b.birthYear;
    }
};

bool operator==(char x[], char y[])
{
    cout << 'x' << endl;
    return x == y;
}

int main()
{
    ZooAnimal animal1, animal2;
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    char name[] = "tiger";
    animal1.setname("bird");
    cout << "Animal name " << animal1.getname() << endl;
    animal2.setname(name);
    cout << "Animal name " << animal2.getname() << endl;
    cout << int(animal2 == 11) << endl;
    animal1.getInformation();
    animal1.operator--(2);
    animal1.getInformation();
}
