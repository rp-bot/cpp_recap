#include "BankAccount.h"
#include <iostream>

void BankAccount::deposit(int depositAmount)
{
    std::cout << "The current balance is: " << myBalance << std::endl;
    myBalance += depositAmount;
    std::cout << "Deposited amount: " << depositAmount << std::endl
              << " The current balance is: " << myBalance << std::endl;
}