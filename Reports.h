/* Author: Shera Adams */
/* Southern New Hampshire University */
/* For CS210 Programming Languages */
/* January, 2023 */

#ifndef BANKING_APPLICATION_REPORTS
#define BANKING_APPLICATION_REPORTS

#pragma once
class Reports
{
public:
	void menu();

	void noDeposits(float t_account_balance, float t_deposit, float t_interest, float t_years);

	void withDeposits(float t_account_balance, float t_deposit, float t_interest, float t_years);
private:
	float m_principle, m_yearEndInterest, m_interestEarned;
};

#endif BANKING_APPLICATION_REPORTS