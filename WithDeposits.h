#pragma once
#ifndef BANKINGAPPLICATION_WITHDEPOSITS_H_
#define BANKINGAPPLICATION_WITHDEPOSITS_H_
using namespace std;

class WithDeposits 
{
private:

    const int MONTHS = 12;

    float YearEndInterest;

    float principle;

    float interestEarned;
public:

    float account_balance, deposit, interest, years;
    void deposits(float account_balance, float deposit,float interest, float years);

};
#endif // BANKINGAPPLICATION_WITHDEPOSITS_H_
