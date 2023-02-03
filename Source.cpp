/* Author: Shera Adams */
/* Southern New Hampshire University */
/* For CS210 Programming Languages */
/* January, 2023 */

#include <iostream>
#include <iomanip>
#include "Account.h"
#include "Reports.h"

using namespace std;

/* declare variables */
float OpeningAmount, deposit, interest, years, account_balance;

int main()
{
    system("COLOR 0A");

    /* Declare variables */
    bool validInput;
    bool activeInput = true;
    int command;
    Account* account; 
    Reports* reports; 
    reports = new Reports();
    /* Class objects instanitation */

    do {

        cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "|||                     SELECT A MENU OPTION:                    |||\n";
        cout << "|||                    [1] Interest Calculator                   |||\n";
        cout << "|||                    [2] Exit the Program                      |||\n";
        cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

        /* input validation */
        try {
            // try user input
            std::cin >> command;
            cout << endl;

            // if the input is unexpected clear the the buffer
            while (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(300, '\n');

                // inform user that the input is valid
                cout << "Invalid Choice. Please choose a valid menu option." << endl;
                continue;
            }

            // throw invlaid input
            if ((command > 2) || (command <= 0))
            {
                throw (command);
            }

        }
        catch (...) {}


        /* switch option to get interest calculation information */
        if (command == 1)
        {
            reports->menu();

            // press any key to continue prompt... 
            system("PAUSE");

            // Get input from user 
            cout << "********************************************************************\n";
            cout << "******************************DATA INPUT****************************\n\n";

            cout << "Initial Investment Amount: ";
            cin >> OpeningAmount;

            cout << "Monthly Deposit: ";
            cin >> deposit;

            cout << "Annual Interest: ";
            cin >> interest;

            cout << "Number of years: ";
            cin >> years;

            // press any key to continue prompt...
            system("PAUSE");

            // Starting Balance is first deposit
            account_balance = OpeningAmount;

            // convert interest to percentage
            interest = interest / 100;

            /* input validation to prevent large very calculations that will unnecessarily take up system resources */
            if ((deposit > 100000000000) || (years > 99) || (interest > 9999) || (OpeningAmount > 10000000000))
            {
                validInput = false;

                cout << "Input error. Now Exiting the program.";
                return 0;
            }
            /* print reports */
            else
            {
                account = new Account(account_balance, deposit, interest, years);
               
                float checkAccount = account->getBalance();
                float checkInterest = account->getInterest();
                float checkYears = account->getYears();
                float checkDeposit = account->getDeposit();
               
                cout << "\nYou entered: \nOpening Amount: " << "$" << checkAccount << ", Deposit: " << "$" << checkDeposit << ", Interest: "
                    << checkInterest << "%, " << "Years: " << checkYears << endl;

                // call the function go get and print balance with no deposits added monthly
                reports->noDeposits(account_balance, deposit, interest, years);

                // call the function go get and print balance with deposits added monthly
                reports->withDeposits(account_balance, deposit, interest, years);

                delete account;
            }
        }
        // switch option to end the program
        if (command == 2)
        {
            cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "|||                  Now exiting the program...                  |||\n";
            cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

            activeInput = false;
           
            delete reports;
           
            return 0;
        }
        // continue the menu loop until the user selects 2 to exit the program
    } while (activeInput == true);


    return 0;
}
