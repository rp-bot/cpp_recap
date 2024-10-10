#include "BankAccount.h"
#include <string>
#include <iostream>

BankAccount::BankAccount(std::string AccountHolderName, int AccountNumber, int Balance)
    : myAccountName(AccountHolderName),
      myAccountNumber(AccountNumber),
      myBalance(Balance) {}
