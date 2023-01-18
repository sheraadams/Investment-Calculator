#pragma once
class Account
{
private:



    const int MONTHS = 12;

    float YearEndInterest;

    float principle;

public:

    Account(float account_balance, float deposit, float interest, float years);

    float account_balance, deposit, interest, years, OpeningAmount;

    void setBalance(float account_balance);

    void setDeposit(float deposit);

    void setInterest(float interest);

    void setYears(float years);

    float getBalance();

    float getDeposit();

    float getInterest();

    float getYears();
};

