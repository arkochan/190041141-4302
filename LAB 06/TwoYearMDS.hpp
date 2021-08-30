#ifndef TWOYEARMDS_H
#define TWOYEARMDS_H
#include <bits/stdc++.h>
#include "MonthlyDepositeScheme.hpp"
using namespace std;
#pragma once

using namespace std;

class TwoYearMDS
{
private:
	float maximumInterest;

public:
	float get_maximumInterest();
	void set_maximumInterest(float input);
	TwoYearMDS();
	~TwoYearMDS();
};
#endif