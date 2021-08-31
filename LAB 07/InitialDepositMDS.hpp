#ifndef INITIALDEPOSITMDS_H
#define INITIALDEPOSITMDS_H
#pragma once
#include <bits/stdc++.h>
#include "MonthlyDepositeScheme.hpp"

using namespace std;
class InitialDepositMDS
{
private:
	float initialDepositAmount;
	float maximumInterest;

public:
	float get_initialDepositAmount();
	void set_initialDepositAmount(float input);
	float get_maximumInterest();
	void set_maximumInterest(float input);
	InitialDepositMDS(float initialdeposit_i);
	~InitialDepositMDS();
};
#endif
