/* Author: Shera Adams */
/* Southern New Hampshire University */
/* For CS210 Programming Languages */
/* January, 2023 */

#include <iostream>
#include <iomanip>
#include "Account.h"
#include "Reports.h"

using namespace std;

int main()
{
    system("COLOR 0A");

    /* Declare variables */

    bool activeInput = true;
    int command;


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
            Reports reports;
            reports.menu();

            // press any key to continue prompt... 
     
        
        }
        // switch option to end the program
        if (command == 2)
        {
            cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "|||                  Now exiting the program...                  |||\n";
            cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

            activeInput = false;
           
           
            return 0;
        }
        // continue the menu loop until the user selects 2 to exit the program
    } while (activeInput == true);


    return 0;
}
