#include <bits/stdc++.h>

using namespace std;

class BankAccount
{
    enum acc_type
    {
        current,
        savings
    };

    static int no_of_accounts;
    int accountNumber;
    string accountHolderName;
    acc_type accountType;
    double currentBalance;
    double minBalance;

public:
    BankAccount(string accountHolderNamei, acc_type accountTypei, double currentBalancei, double minBalancei)
        : accountNumber(++no_of_accounts), accountHolderName(accountHolderNamei), accountType(accountTypei), currentBalance(currentBalancei), minBalance(minBalancei)
    {
    }
    BankAccount()
    {
        string inp;
        int i;

        accountNumber = ++no_of_accounts;
        cout << "accountNumber: " << accountNumber << endl;
        cout << "accountHolderName :";
        cin >> inp;
        accountHolderName = inp;
        cout
            << "accountType :";
        cin >> inp;
        if (inp == "savings")
            accountType = savings;
        else if (inp == "current")
            accountType = current;
        cout
            << "currentBalance :";
        cin >> i;
        currentBalance = i;
        cout
            << "minBalance :";
        cin >> i;
        minBalance = i;
    }
    void showBalance()
    {
        cout << currentBalance << endl;
    }
    void display()
    {
        cout << "accountNumber :" << accountNumber << endl;
        cout << "accountHolderName :" << accountHolderName << endl;
        cout << "accountType :" << accountType << endl;
        cout << "currentBalance :" << currentBalance << endl;
    }
    void deposit(double i)
    {
        currentBalance += i;
    }
    void withdrawal(double i)
    {

        if (currentBalance - i >= minBalance)
            currentBalance -= i;
        else
            cout << "withdrawal failed" << endl;
    }
    double giveInterst(double rate = 2.5)
    {
        double interest = currentBalance * rate / 100;
        deposit(interest * .9);
        return interest;
    }
    ~BankAccount()
    {
        cout << "Account of Mr. " << accountHolderName << " with account no " << accountNumber << " is destroyed with a balance BDT " << currentBalance << endl;
    }
};
int BankAccount::no_of_accounts = 0;
int main()
{
    BankAccount acc1;
    long long i, j, n;
    long long x = 0, t, inp, sum = 0;
    acc1.showBalance();
    acc1.deposit(500);
    acc1.withdrawal(500);
    acc1.withdrawal(5000);
}
