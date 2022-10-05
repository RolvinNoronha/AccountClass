#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double amount)
    : Account(name, amount) {}

bool CheckingAccount::withdraw(double amount)
{
    amount += fee;
    return Account::withdraw(amount);
}

std::ostream& operator<<(std::ostream& os, const CheckingAccount& acc) 
{
    os << "[Checking Account: " << acc.name << ": " << acc.balance << "]";
    return os;
}