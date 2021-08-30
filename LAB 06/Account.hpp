#ifndef ACCOUNT_H
#define ACCOUNT_H
#pragma once
#include <bits/stdc++.h>
using namespace std;
class Account
{
protected:
	unsigned int accountNo;
	string accountName;
	float balance;

public:
	unsigned int getAccountNo();
	void setAccountName(string input);
	string getAccountName();
	short int getAccountPrefix();
	float getNextAccount();
	void setBalance(float input);
	float getBalance();
	Account(string accountName_inp, float balance_inp);
	~Account();
	Account();
};
#endif