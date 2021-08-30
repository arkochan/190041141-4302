#ifndef LAB_H
#define LAB_H
#include <bits/stdc++.h>
#pragma once
using namespace std;
class Lab
{
private:
	string labName;
	int capacity;

public:
	Lab();
	Lab(string inp, int ic);
	
	~Lab();
	string getLabName();
	int getCapacity();
	void setLabName(string s);
	void setCapacity(int c);
	void show();
};
#endif
