#include "Lecturer_room.hpp"
#include <bits/stdc++.h>
using namespace std;
Lecturer_room::Lecturer_room(string name, int no, int c) : roomName(name), roomNo(no), capacity(c)
{
}
Lecturer_room::~Lecturer_room()
{
}
string Lecturer_room::getRoomName()
{
    return roomName;
}
int Lecturer_room::getRoomNo()
{
    return roomNo;
}
int Lecturer_room::getCapacity()
{
    return capacity;
}
void Lecturer_room::setRoomName(string inp)
{
    roomName = inp;
}
void Lecturer_room::setRoomNo(int inp)
{
    roomNo = inp;
}
void Lecturer_room::setCapacity(int inp)
{
    capacity = inp;
}
void Lecturer_room::show()
{
    cout << roomName << " " << roomNo << " " << capacity << " capacity\n";
}