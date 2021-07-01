#include <bits/stdc++.h>

using namespace std;
class ZooAnimal
{
    char nameOfAnimal[50];
    int birthYear;
    int cageNumber;
    float weight;
    int height;

public:
    ZooAnimal() : birthYear(2021), cageNumber(0), weight(0), height(0)
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
        weight = n;
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
        return weight;
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
            << "weight " << weight << endl
            << "height " << height << endl;
    }
};
int main()
{
    ZooAnimal animal1, animal2;
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    char name[] = "tiger";
    animal1.getInformation();
    animal1.setname("bird");
    cout << "Animal name" << animal1.getname() << endl;
    animal2.setname(name);
    cout << "Animal name" << animal2.getname() << endl;
}
