#pragma once
class Reports
{
public:
	void menu();

	void noDeposits(float account_balance, float deposit, float interest, float years);

	void withDeposits(float account_balance, float deposit, float interest, float years);
};

