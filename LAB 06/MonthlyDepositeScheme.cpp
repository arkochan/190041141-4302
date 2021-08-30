#include "MonthlyDepositeScheme.hpp"

MonthlyDepositeScheme::MonthlyDepositeScheme()
{
    accountNo = nextAccountNo();
    nextacc++;
}

MonthlyDepositeScheme::~MonthlyDepositeScheme()
{
}

void MonthlyDepositeScheme::setInterestRate(float input) { interestRate = input; }
float MonthlyDepositeScheme::getInterestRate() { return interestRate; }
void MonthlyDepositeScheme::setMonthlyDeposirAmount(float input) { monthlyDepositAmount = input; }
float MonthlyDepositeScheme::getMonthlyDeposirAmount() { return monthlyDepositAmount; }
void MonthlyDepositeScheme::setMaximumInterest(float input) { maximumInterest = input; }
float MonthlyDepositeScheme::getMaximumInterest() { return maximumInterest; }
short int MonthlyDepositeScheme::getAccountPrefix() { return accountPrefix; }
const short int MonthlyDepositeScheme::accountPrefix = 300;
int MonthlyDepositeScheme::nextacc = 1;
unsigned int MonthlyDepositeScheme::nextAccountNo()
{
    return accountPrefix * 100000 + nextacc;
}
//10000000