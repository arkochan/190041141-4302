#ifndef N28BUILDING_H
#define N28BUILDING_H
#pragma once
#include "Lecturer_room.hpp"
#include "Lab.hpp"

class N28Building
{
    vector<Lab> labList;
    vector<Lecturer_room> lecturerRoomList;

public:
    void addLab(string inp, int ic);
    void addLecturerRoom(string name, int n, int ic);
    void showAllLabs();
    void showAllLecturerRooms();
};
#endif

class class_a{
    class_b B(191);
}