#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#pragma once
#include <bits/stdc++.h>
#include "Account.hpp"
using namespace std;
class SavingsAccount : public Account
{
private:
	float interestRate;
	float monthlyDepositAmount;
	float maximumInterest;
	const static short int accountPrefix;

	static int nextacc;
    unsigned int nextAccountNo();

public:
	void setInterestRate(float input);
	float getInterestRate();
	void setMonthlyDeposirAmount(float input);
	float getMonthlyDeposirAmount();
	void setMaximumInterest(float input);
	float getMaximumInterest();
	short int getAccountPrefix();
	SavingsAccount();
	~SavingsAccount();
};
#endif