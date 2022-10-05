#include <iostream>
#include <vector>
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "AccountUtil.h"
#include "TrustAccount.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Homelander"});
    accounts.push_back(Account {"Soldier Boy", 2000} );
    accounts.push_back(Account {"David", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 
    vector<SavingsAccount> sav_accounts;
    sav_accounts.push_back(SavingsAccount {} );
    sav_accounts.push_back(SavingsAccount {"Superman"} );
    sav_accounts.push_back(SavingsAccount {"Batman", 2000} );
    sav_accounts.push_back(SavingsAccount {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    // Checking
    vector<CheckingAccount> check_accounts;
    check_accounts.push_back(CheckingAccount {} );
    check_accounts.push_back(CheckingAccount {"Bob"} );
    check_accounts.push_back(CheckingAccount {"Rolvin", 2000} );
    check_accounts.push_back(CheckingAccount {"Colton", 5000} );

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust
    vector<TrustAccount> trust_accounts;
    trust_accounts.push_back(TrustAccount {});
    trust_accounts.push_back(TrustAccount {"Harry"});
    trust_accounts.push_back(TrustAccount {"John", 1000});
    trust_accounts.push_back(TrustAccount {"Bobby", 4000, 1.50});
    
    display(trust_accounts);
    deposit(trust_accounts, 5100);
    withdraw(trust_accounts, 100);
    withdraw(trust_accounts, 100);
    withdraw(trust_accounts, 100);
    withdraw(trust_accounts, 100);

    return 0;
}