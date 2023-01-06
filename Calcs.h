#pragma once
#ifndef BANKINGAPPLICATION_CALCS_H_
#define BANKINGAPPLICATION_CALCS_H_

using namespace std;

class Calcs {
private: 

    const int MONTHS = 12;
  
    float YearEndInterest;

    float principle;

    float interestEarned;
    
public:

    float account_balance, deposit, interest, years;
    
    void noDeposits(float account_balance, float deposit,float interest, float years);

};
#endif // BANKINGAPPLICATION_CALCS_H_
