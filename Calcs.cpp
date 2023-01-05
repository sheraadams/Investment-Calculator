#include "Calcs.h"
#include <iostream>
#include <iomanip>
using namespace std;

// function calculates the balance and interest earned if there are no monthly deposits
void Calcs::noDeposits(float account_balance, float deposit, float interest, float years)
{
    const int MONTHS = 12;

    cout << "\n     Balance and Interest Without Additional Monthly Deposits\n";
    cout << "====================================================================\n";
    cout << " Year\t\t Year End Balance\t Year End Earned Interest\n";
    cout << "--------------------------------------------------------------------\n";

    //calculate yearly interest. iterate through years to show balance without any additional monthly deposits.
    for (int i = 0; i < years; i++)
    {
        // update account balance with added interest
        float YearEndInterest = account_balance * interest;

        account_balance += YearEndInterest;

        cout << (i + 1) << "\t\t\t" << fixed << setprecision(2) << account_balance << "\t\t\t\t" << YearEndInterest<< "\n";
    }
    return;

}