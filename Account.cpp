#include "Account.h"

Account::Account(float account_balance, float deposit, float interest, float years)
{
    setBalance(account_balance);
    setDeposit(deposit);
    setInterest(interest);
    setYears(years);
}

void Account::setBalance(float account_balance){    this->account_balance = account_balance;}

void Account::setDeposit(float deposit){  this->deposit = deposit;}

void Account::setInterest(float interest){    this->interest = interest;}

void Account::setYears(float years){    this->years = years;}

float Account::getBalance(){    return account_balance;}

float Account::getDeposit(){    return deposit;}

float Account::getInterest(){    return interest;}

float Account::getYears(){    return years;}