#include "InitialDepositMDS.hpp"

InitialDepositMDS::InitialDepositMDS(float initialdeposit_i) : initialDepositAmount(initialdeposit_i)
{
}

InitialDepositMDS::~InitialDepositMDS()
{
}
float initialDepositAmount;

float InitialDepositMDS::get_initialDepositAmount()
{
    return initialDepositAmount;
}
void InitialDepositMDS::set_initialDepositAmount(float input)
{
    initialDepositAmount = input;
}

float InitialDepositMDS::get_maximumInterest() { return maximumInterest; }
void InitialDepositMDS::set_maximumInterest(float input) { maximumInterest = input; }