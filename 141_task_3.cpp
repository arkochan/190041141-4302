#include <bits/stdc++.h>
using namespace std;
class Product
{

    double discountPercent, unitPrice;
    char name[50];

public:
    Product() : unitPrice(10), discountPercent(.5) void assignName(char nameinp[])
    {
        strcpy(name, nameinp);
    }
    void setPrice(double price)
    {
        unitPrice = price;
    };
    void setDiscPercent(double percent)
    {
        discountPercent = percent;
    };
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
