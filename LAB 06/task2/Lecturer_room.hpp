#ifndef LECTURER_ROOM_H
#define LECTURER_ROOM_H
#pragma once

class Lecturer_room
{
private:
	string roomName;
	int roomNo, capacity;

public:
	Lecturer_room(string name, int no, int c);
	Lecturer_room();
	~Lecturer_room();

	string getRoomName();
	int getRoomNo();
	int getCapacity();
	void setRoomName(string s);
	void setRoomNo(int n);
	void setCapacity(int c);
	void show();
};
#endif