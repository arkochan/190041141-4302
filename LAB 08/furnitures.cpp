#include <bits/stdc++.h>
using namespace std;

enum class Material
{
    Wood,
    Board,
    Steel,
    foam
};
enum class BedSize
{
    Single,
    SemiDouble,
    Double
};
enum class SofaSize
{
    One,
    Two,
    Three,
    Four,
    Five
};
enum class AlmirahSize
{
    Two,
    Three,
    Four
};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
    string name;

public:
    Furniture(double p, double d, Material m, string n) : price(0), discount(0), name(n), madeof(Material::Wood)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
    }

    void setPrice(double val)
    {
        if (val > 0)
            price = val;
    }
    void setDiscount(double val)
    {
        if (val <= price)
            discount = val;
    }
    double getDiscount()
    {
        return discount;
    }
    double getPrice()
    {
        return price;
    }
    void setDiscuntPercentage(double perc)
    {
        discount = price * perc / 100;
    }
    void setMadeof(Material val)
    {
        madeof = val;
    }
    void setName(string nam)
    {
        name = nam;
    }
    string getMadeof()
    {
        if (madeof == Material::Wood)
            return string("Wood");
        else if (madeof == Material::Board)
            return string("Board");
        else if (madeof == Material::Steel)
            return string("Steel");
        else
            return string("");
    }
    virtual void productDetails() = 0;
    /*{

        cout << "Name: " << name << endl;
        cout << "Regular Price: " << price << endl;
        cout << "Discounted Price: " << price - discount << endl;
        cout << "Material: " << getMadeof() << endl;
    }*/
};

class Bed : public Furniture
{
    BedSize type;

public:
    Bed(double p, double d, Material m, BedSize s, string n) : Furniture(p, d, m, n), type(s) {}
    void productDetails()
    {

        cout << "Name: " << name << endl;
        cout << "Regular Price: " << price << endl;
        cout << "Discounted Price: " << price - discount << endl;
        cout << "Material: " << getMadeof() << endl;
        //Furniture::productDetails();
        cout << "Bed Size: ";
        if (type == BedSize::Double)
            cout << "Double";
        else if (type == BedSize::SemiDouble)
            cout << "SemiDouble";
        else if (type == BedSize::Single)
            cout << "Single";
        else
            cout << "";
        cout << endl;
    }
};

class Sofa : public Furniture
{
    SofaSize type;

public:
    Sofa(double p, double d, Material m, SofaSize s, string n) : Furniture(p, d, m, n), type(s) {}
    void productDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Regular Price: " << price << endl;
        cout << "Discounted Price: " << price - discount << endl;
        cout << "Material: " << getMadeof() << endl;
        //Furniture::productDetails();
        cout << "Sofa Size: ";
        if (type == SofaSize::One)
            cout << "One";
        else if (type == SofaSize::Two)
            cout << "Two";
        else if (type == SofaSize::Three)
            cout << "Three";
        else if (type == SofaSize::Four)
            cout << "Four";
        else if (type == SofaSize::Five)
            cout << "Five";
        else
            cout << "";
        cout << endl;
    }
    ~Sofa()
    {
    }
};

class Almirah : public Furniture
{
    AlmirahSize type;

public:
    Almirah(double p, double d, Material m, AlmirahSize s, string n) : Furniture(p, d, m, n), type(s) {}
    void productDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Regular Price: " << price << endl;
        cout << "Discounted Price: " << price - discount << endl;
        cout << "Material: " << getMadeof() << endl;
        //Furniture::productDetails();
        cout << "Almirah Size: ";
        if (type == AlmirahSize::Two)
            cout << "Two";
        else if (type == AlmirahSize::Four)
            cout << "Four";
        else if (type == AlmirahSize::Three)
            cout << "Three";
        else
            cout << "";
        cout << endl;
    }
};

/**task 4
sort_furniture_discount will sort the array in descending order based on their discount price.
You may need to add some member functions
**/

bool comp(Furniture *a, Furniture *b)
{
    return a->getPrice() - a->getDiscount() > b->getPrice() - b->getDiscount();
}
void sort_furniture_discount(Furniture **furnitures, int no_of_furnitures)
{
    sort(furnitures, furnitures + no_of_furnitures, comp);
}

int main()
{

    Furniture *f_list[100];

    /**
        task 1
        So that following lines can be executed without error
    */
    f_list[0] = new Bed(10000, 123, Material::Wood, BedSize::Single, "x");
    f_list[1] = new Sofa(11000, 234, Material::Steel, SofaSize::Five, "y");
    f_list[2] = new Almirah(13000, 345, Material::Wood, AlmirahSize::Two, "z");
    f_list[3] = new Bed(10090, 123, Material::Wood, BedSize::Single, "c");

    /**task 1 ends here*/

    /**
        task 2
        So that following lines can be executed without error

        task 3 (Modify productDetails)
    */
    f_list[2]->setDiscuntPercentage(30);
    for (int i = 0; i < 4; i++)
    {
        f_list[i]->productDetails();
        cout << "####################" << endl;
    }

    /**task 2 ends here*/
    /**task 3 ends here*/

    /**task 4
    So that following lines can be executed without error
    */
    sort_furniture_discount(f_list, 4);
    cout << ".........................." << endl;
    for (int i = 0; i < 4; i++)
    {
        f_list[i]->productDetails();
        cout << "####################" << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        delete f_list[i];
    }
    /**task 4 ends here*/
}
