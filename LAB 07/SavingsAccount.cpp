#include "SavingsAccount.hpp"

SavingsAccount::SavingsAccount()
{
    accountNo = nextAccountNo();
    nextacc++;
}

SavingsAccount::~SavingsAccount()
{
}

void SavingsAccount::setInterestRate(float input) { interestRate = input; }
float SavingsAccount::getInterestRate() { return interestRate; }
void SavingsAccount::setMonthlyDeposirAmount(float input) { monthlyDepositAmount = input; }
float SavingsAccount::getMonthlyDeposirAmount() { return monthlyDepositAmount; }
void SavingsAccount::setMaximumInterest(float input) { maximumInterest = input; }
float SavingsAccount::getMaximumInterest() { return maximumInterest; }
short int SavingsAccount::getAccountPrefix() { return accountPrefix; }
const short int SavingsAccount::accountPrefix = 200;
int SavingsAccount::nextacc = 1;
unsigned int SavingsAccount::nextAccountNo()
{
    return accountPrefix * 100000 + nextacc;
}