/* Author: Shera Adams */
/* Southern New Hampshire University */
/* For CS210 Programming Languages */
/* January, 2023 */

#ifndef BANKING_APPLICATION_ACCOUNT
#define BANKING_APPLICATION_ACCOUNT
#pragma once

class Account
{
private:

    const int MONTHS = 12;

    float m_principle;

public:

    Account(float t_account_balance, float t_deposit, float t_interest, float t_years);

    float account_balance, deposit, interest, years, OpeningAmount;

    void setBalance(float t_account_balance);

    void setDeposit(float t_deposit);

    void setInterest(float t_interest);

    void setYears(float t_years);

    float getBalance();

    float getDeposit();

    float getInterest();

    float getYears();
};

#endif BANKING_APPLICATION_ACCOUNT

