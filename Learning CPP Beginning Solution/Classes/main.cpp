#include <iostream>
#include "Account.h"

using std::cout;
using std::endl;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0)) {
        cout << "Deposit OK" << endl;
    }
    else {
        cout << "Deposit Not Allowed" << endl;
    }



    if (frank_account.withdraw(500.0)) {
        cout << "Withrawal OK" << endl;
    }
    else {
        cout << "Not sufficient funds" << endl;
    }



    if (frank_account.withdraw(1500.0)) {
        cout << "Withrawal OK" << endl;
    }
    else {
        cout << "Not sufficient funds" << endl;
    }

    return 0;
}

