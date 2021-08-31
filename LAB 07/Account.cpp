#include "Account.hpp"

Account::Account(string accountName_inp, float balance_inp) : accountName(accountName_inp), balance(balance_inp)
{
}

Account::~Account() {}

unsigned int Account::getAccountNo() { return accountNo; }
void Account::setAccountName(string input) { accountName = input; }
string Account::getAccountName() { return accountName; }

void Account::setBalance(float input) { balance = input; }
float Account::getBalance() { return balance; }
