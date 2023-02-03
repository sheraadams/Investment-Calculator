/* Author: Shera Adams */
/* Southern New Hampshire University */
/* For CS210 Programming Languages */
/* January, 2023 */

#include "Account.h"

Account::Account(float t_account_balance, float t_deposit, float t_interest, float t_years)
{
    setBalance(t_account_balance);
    setDeposit(t_deposit);
    setInterest(t_interest);
    setYears(t_years);
}

void Account::setBalance(float t_account_balance){    this->account_balance = t_account_balance;}

void Account::setDeposit(float t_deposit){  this->deposit = t_deposit;}

void Account::setInterest(float t_interest){    this->interest = t_interest;}

void Account::setYears(float t_years){    this->years = t_years;}

float Account::getBalance(){    return account_balance;}

float Account::getDeposit(){    return deposit;}

float Account::getInterest(){    return interest;}

float Account::getYears(){    return years;}