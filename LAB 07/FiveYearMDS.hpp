#ifndef FIVEYEARMDS_H
#define FIVEYEARMDS_H
#include <bits/stdc++.h>
#include "MonthlyDepositeScheme.hpp"
using namespace std;
#pragma once
#include "MonthlyDepositeScheme.hpp"

using namespace std;

class FiveYearMDS
{
private:
	float maximumInterest;

public:
	float get_maximumInterest();
	void set_maximumInterest(float input);
	FiveYearMDS();
	~FiveYearMDS();
};
#endif