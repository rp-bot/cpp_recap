#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount
{
public:
    BankAccount(std::string AccountHolderName = "No_Name", int AccountNumber = 0, int Balance = 0);
    void deposit(int depositAmount);
    void withdraw(int withdrawAmount);
    void checkBalance();

private:
    /* data */
    std::string myAccountName;
    int myAccountNumber;
    int myBalance;
};

#endif