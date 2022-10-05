#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double amount, double int_rate)
    : SavingsAccount(name, amount, int_rate), count{0} {} 


bool TrustAccount::deposit(double amount) 
{
    if(amount > 5000)
        amount += 50;
    
    return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount) 
{
    if (count < 3 && amount < (balance * 20) / 100)
    {
        count++;
        return Account::withdraw(amount);
    }
    else    
        return false;
}


std::ostream& operator<<(std::ostream& os, const TrustAccount& acc)
{
    os << "[Trust Account: " << acc.name << ": " << acc.balance << ": " << acc.int_rate << "%]";
    return os; 
}