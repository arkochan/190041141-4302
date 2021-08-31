#ifndef LOANACCOUNT_H
#define LOANACCOUNT_H
#pragma once
#include <bits/stdc++.h>
#include "Account.hpp"
using namespace std;
class LoanAccount : public Account
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
	LoanAccount();
	~LoanAccount();
};
#endif