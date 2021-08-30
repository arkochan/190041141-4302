#include "LoanAccount.hpp"

LoanAccount::LoanAccount()
{
    accountNo = nextAccountNo();
    nextacc++;
}

LoanAccount::~LoanAccount()
{
}

void LoanAccount::setInterestRate(float input) { interestRate = input; }
float LoanAccount::getInterestRate() { return interestRate; }
void LoanAccount::setMonthlyDeposirAmount(float input) { monthlyDepositAmount = input; }
float LoanAccount::getMonthlyDeposirAmount() { return monthlyDepositAmount; }
void LoanAccount::setMaximumInterest(float input) { maximumInterest = input; }
float LoanAccount::getMaximumInterest() { return maximumInterest; }
short int LoanAccount::getAccountPrefix() { return accountPrefix; }
const short int LoanAccount::accountPrefix = 300;
int LoanAccount::nextacc = 1;
unsigned int LoanAccount::nextAccountNo()
{
    return accountPrefix * 100000 + nextacc;
}