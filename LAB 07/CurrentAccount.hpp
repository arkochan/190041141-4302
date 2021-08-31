#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include <bits/stdc++.h>
#include "Account.hpp"
using namespace std;
#pragma once
class CurrentAccount : public Account
{
private:
    const static float ServiceCharge;
    const static short int accountPrefix;

    static int nextacc;
    unsigned int nextAccountNo();

public:
    float getServiceCharge();
    short int getAccountPrefix();
    CurrentAccount();

    ~CurrentAccount();
};
#endif