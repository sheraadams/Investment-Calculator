
#include <iostream>
#include <iomanip>
#include "WithDeposits.h"
using namespace std;

// function calculates the balance and interest earned if there are monthly deposits
void WithDeposits::deposits(float account_balance, float deposit, float interest, float years)

{
    // start the account off at the opening amount
    float principle;
    const int MONTHS = 12;

    // Print Yearly Data
    cout << "\n\n    Balance and Interest With Additional Monthly Deposits\n";
    cout << "====================================================================\n";
    cout << "  Year\t\t Year End Balance\t Year End Earned Interest\n";
    cout << "--------------------------------------------------------------------\n";


    // iterate through years whwere yearEndInterest starts at $0 each year 
    for (int i = 0; i < years; i++)
    {
        float yearEndInterest = 0;
        //iterate through months compounding interest for each month
        for (int j = 0; j < 12; j++)
        {
            // princliple is equal to the monthly deposit + account balance for each month
            float principle = account_balance + deposit;
            // interestEarned calculates the interest earned each month
            float interestEarned = principle * (interest / MONTHS);
            // interestEarned is added to account_balance each month
            account_balance = principle + interestEarned;
            // yearEndInterest = sum of interestEarned for all months
            yearEndInterest += interestEarned;
        }
        // print the result to console: year end interest and account balance
        cout << (i + 1) << "\t\t\t" << fixed << setprecision(2) << account_balance << "\t\t\t" << yearEndInterest << "\n";
    }

    cout << "--------------------------------------------------------------------\n\n\n";
    
    return;
}

