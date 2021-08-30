#include "CurrentAccount.hpp"

CurrentAccount::CurrentAccount()
{
    accountNo = nextAccountNo();
    nextacc++;
}

CurrentAccount::~CurrentAccount()
{
}
float CurrentAccount::getServiceCharge()
{
    return ServiceCharge;
}
const float CurrentAccount::ServiceCharge = 100;
const short int CurrentAccount::accountPrefix = 100;
short int CurrentAccount::getAccountPrefix() { return accountPrefix; }
int CurrentAccount::nextacc = 1;
unsigned int CurrentAccount::nextAccountNo()
{
    return accountPrefix * 100000 + nextacc;
}