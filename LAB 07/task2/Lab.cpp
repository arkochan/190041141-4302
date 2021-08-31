#include "Lab.hpp"

Lab::Lab()
{
}

Lab::~Lab()
{
}
Lab::Lab() : labName(""), capacity(0) {}
Lab::Lab(string inp, int ic) : labName(inp), capacity(ic)
{
}
string Lab::getLabName() { return labName; }
int Lab::getCapacity() { return capacity; }
void Lab::setLabName(string s) { labName = s; }
void Lab::setCapacity(int c) { capacity = c; }
void Lab::show()
{
    cout << labName << " " << capacity << " capacity\n";
}