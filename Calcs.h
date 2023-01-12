#pragma once
#ifndef BANKINGAPPLICATION_CALCS_H_
#define BANKINGAPPLICATION_CALCS_H_

using namespace std;

class Calcs {

private:

    void SetInterest(float interest);

    void SetBalance(float account_balance);

    float GetBalance();

    float GetInterest();

    const int MONTHS = 12;

    float YearEndInterest;

    float principle;

    float interestEarned;

public:
    Calcs(float account_balance, float deposit, float interest, float years);

    float account_balance, deposit, interest, years;

    void noDeposits(float account_balance, float deposit,float interest, float years);

};
#endif // BANKINGAPPLICATION_CALCS_H_