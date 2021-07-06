#include <bits/stdc++.h>
using namespace std;
class Product
{

    double discountPercent, unitPrice;
    char name[50], genericName[50];

public:
    Product() : unitPrice(0), discountPercent(5) {}
    void assignName(char nameinp[], char genericNameinp[])
    {
        strcpy(name, nameinp);
        strcpy(name, genericNameinp);
    }
    void assignPrice(double price)
    {
        unitPrice = price;
    }
    void setDiscPercent(double percent)
    {
        discountPercent = percent;
    }
    double getSellingPrice(int nos)
    {
        return (unitPrice * (1 - discountPercent / 100)) * nos;
    }
    void display()
    {
        cout << name << " has a unit price BDT " << unitPrice << ". Current discount " << discountPercent << "%." << endl;
    }
};
int main()
{
}
