#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "SavingsAccount.h"
#include <string>

class TrustAccount : public SavingsAccount 
{
    friend std::ostream& operator<<(std::ostream& os, const TrustAccount& acc);
private:
    static constexpr const char*  def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    int count;
public:

    TrustAccount(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif