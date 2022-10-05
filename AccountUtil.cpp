#include "AccountUtil.h"

// Accounts
void display(const std::vector<Account>& accounts)
{
    std::cout << "\n=====Accounts=====\n" << std::endl;
    for (const auto& acc: accounts) 
    {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Account>& accounts, double amount) 
{
    std::cout << "\n=====Depositing to Accounts=====\n" << std::endl;
    for (auto& acc: accounts) 
    {
        if (acc.deposit(amount))
            std::cout << "Depostied amount: " << amount << " to account: " << acc << std::endl;
        else
            std::cout << "Deposit to account: " << acc << " failed" << std::endl;
    }
}

void withdraw(std::vector<Account>& accounts, double amount) 
{
    std::cout << "\n=====Widthdrawing from Accounts=====\n" << std::endl;
    for (auto& acc: accounts)
    {
        if (acc.withdraw(amount))
            std::cout << "Withdrawal of amount: " << amount << " from account: " << acc << " successfull" << std::endl;
        else
            std::cout << "Failed to withdraw amount: " << amount << " from account: " << acc << std::endl;
    }
}




// Savings Account
void display(const std::vector<SavingsAccount>& accounts)
{
    std::cout << "\n=====Savings Accounts=====\n" << std::endl;
    for (const auto& acc: accounts) 
    {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<SavingsAccount>& accounts, double amount) 
{
    std::cout << "\n=====Depositing to Savings Accounts=====\n" << std::endl;
    for (auto& acc: accounts) 
    {
        if (acc.deposit(amount))
            std::cout << "Depostied amount: " << amount << " to account: " << acc << std::endl;
        else
            std::cout << "Deposit to account: " << acc << " failed" << std::endl;
    }
}

void withdraw(std::vector<SavingsAccount>& accounts, double amount) 
{
    std::cout << "\n=====Widthdrawing from Savings Accounts=====\n" << std::endl;
    for (auto& acc: accounts)
    {
        if (acc.withdraw(amount))
            std::cout << "Withdrawal of amount: " << amount << " from account: " << acc << " successfull" << std::endl;
        else
            std::cout << "Failed to withdraw amount: " << amount << " from account: " << acc << std::endl;
    }
}



// Checking Account
void display(const std::vector<CheckingAccount>& accounts)
{
    std::cout << "\n=====Checking Accounts=====\n" << std::endl;
    for (const auto& acc: accounts) 
    {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<CheckingAccount>& accounts, double amount) 
{
    std::cout << "\n=====Depositing to Checking Accounts=====\n" << std::endl;
    for (auto& acc: accounts) 
    {
        if (acc.deposit(amount))
            std::cout << "Depostied amount: " << amount << " to account: " << acc << std::endl;
        else
            std::cout << "Deposit to account: " << acc << " failed" << std::endl;
    }
}

void withdraw(std::vector<CheckingAccount>& accounts, double amount) 
{
    std::cout << "\n=====Widthdrawing from Checking Accounts=====\n" << std::endl;
    for (auto& acc: accounts)
    {
        if (acc.withdraw(amount))
            std::cout << "Withdrawal of amount: " << amount << " from account: " << acc << " successfull" << std::endl;
        else
            std::cout << "Failed to withdraw amount: " << amount << " from account: " << acc << std::endl;
    }
}



// Trust Account
void display(const std::vector<TrustAccount>& accounts)
{
    std::cout << "\n=====Trust Accounts=====\n" << std::endl;
    for (const auto& acc: accounts) 
    {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<TrustAccount>& accounts, double amount) 
{
    std::cout << "\n=====Depositing to Trust Accounts=====\n" << std::endl;
    for (auto& acc: accounts) 
    {
        if (acc.deposit(amount))
            std::cout << "Depostied amount: " << amount << " to account: " << acc << std::endl;
        else
            std::cout << "Deposit to account: " << acc << " failed" << std::endl;
    }
}

void withdraw(std::vector<TrustAccount>& accounts, double amount) 
{
    std::cout << "\n=====Widthdrawing from Trust Accounts=====\n" << std::endl;
    for (auto& acc: accounts)
    {
        if (acc.withdraw(amount))
            std::cout << "Withdrawal of amount: " << amount << " from account: " << acc << " successfull" << std::endl;
        else
            std::cout << "Failed to withdraw amount: " << amount << " from account: " << acc << std::endl;
    }
}