#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {}


bool Account::deposit(double amount)
{
    if (amount < 0)
        return false;
    
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (amount > balance || amount < 0) 
        return false;
    
    balance -= amount;
    return true;
}

double Account::get_balance() const 
{
    return balance;
}

std::ostream& operator<<(std::ostream& os, const Account& acc) 
{
    os << "[Account: " << acc.name << ": " << acc.balance << "]";
    return os;
}