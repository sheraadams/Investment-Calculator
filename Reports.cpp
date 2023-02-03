/* Author: Shera Adams */
/* Southern New Hampshire University */
/* For CS210 Programming Languages */
/* January, 2023 */

#include "Reports.h"
#include <iostream>
#include <iomanip>


using namespace std;

/* This function calculates the balanceand interest earned if there are monthly deposits */ 
void Reports::withDeposits(float t_account_balance, float t_deposit, float t_interest, float t_years)

{
    /* start the account off at the opening amount */
    float m_principle;
    const int MONTHS = 12;

    /* Print Yearly Data */
    cout << "\n\n    Balance and Interest With Additional Monthly Deposits\n";
    cout << "====================================================================\n";
    cout << "  Year\t\t Year End Balance\t Year End Earned Interest\n";
    cout << "--------------------------------------------------------------------\n";


    /* iterate through years whwere yearEndInterest starts at $0 each year */ 
    for (int i = 0; i < t_years; i++)
    {
        float m_yearEndInterest = 0;
        /* iterate through months compounding interest for each month */ 
        for (int j = 0; j < 12; j++)
        {
            /* princliple is equal to the monthly deposit + account balance for each month */ 
            float m_principle = t_account_balance + t_deposit;
            /* interestEarned calculates the interest earned each month */ 
            float m_interestEarned = m_principle * (t_interest / MONTHS);
            /* interestEarned is added to account_balance each month */ 
            t_account_balance = m_principle + m_interestEarned;
            /* yearEndInterest = sum of interestEarned for all months */
            m_yearEndInterest += m_interestEarned;
        }
        /* print the result to console: year end interest and account balance  */
        cout << (i + 1) << "\t\t\t" << fixed << setprecision(2) << t_account_balance << "\t\t\t" << m_yearEndInterest << "\n";
    }

    cout << "--------------------------------------------------------------------\n\n\n";

    return;
}

/* This function calculates the balanceand interest earned if there are no monthly deposits */
void Reports::noDeposits(float t_account_balance, float t_deposit, float t_interest, float t_years)
{
    const int MONTHS = 12;

    cout << "\n     Balance and Interest Without Additional Monthly Deposits\n";
    cout << "====================================================================\n";
    cout << " Year\t\t Year End Balance\t Year End Earned Interest\n";
    cout << "--------------------------------------------------------------------\n";

    /* calculate yearly interest.iterate through years to show balance without any additional monthly deposits. */
    for (int i = 0; i < t_years; i++)
    {
        /* update account balance with added interest */
        float YearEndInterest = t_account_balance * t_interest;

        t_account_balance += YearEndInterest;

        cout << (i + 1) << "\t\t\t" << fixed << setprecision(2) << t_account_balance << "\t\t\t\t" << YearEndInterest << "\n";
    }


    return;

}
void Reports::menu()
{
    // menu for prepare user to enter data in the following step
    cout << "********************************************************************\n";
    cout << "******************************DATA INPUT****************************\n\n";

    cout << "Initial Investment Amount:\n";

    cout << "Monthly Deposit:\n";

    cout << "Annual Interest:\n";

    cout << "Number of years:\n";

    return;
}