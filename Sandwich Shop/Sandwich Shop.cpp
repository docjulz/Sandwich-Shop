// This program asks user for their sandwich selection and 
// displays the total price for the users order
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const double HAM = 4.0,
                 VEGGIE = 3.0,
                 RAT = 2.0;
    int          sandwich,
                 another;
    double       total = 0.0;
    
    // Do-while loop to run program
    do
    {
        // Show menu and prices
        do
        {
        cout << fixed << showpoint << setprecision(2);
        cout << "*********************\n";
        cout << "WELCOME TO Which Wich\n";
        cout << "*********************\n";
        
        cout << "\n(1) Ham for $4.00\n";
        cout << "(2) Veggie for $3.00\n";
        cout << "(3) Rat for $2.00\n";
        cout << "\nSelect a sandwich number: ";        
        cin >> sandwich;

        total = 0;          // accumulator

        if (sandwich == 1)
        {
            total += HAM;
            cout << "You selected Ham";
        }
        else if (sandwich == 2)
        {
            total += VEGGIE;
            cout << "You selected Veggie";
        }
        else if (sandwich == 3)
        {
            total += RAT;
            cout << "You selected Rat";
        }
        
        cout << " for " << total << " to the cart.\n";

        } while ((sandwich < 1) || (sandwich > 3));    // If selection not 1-3 move on to rest of program.     
        
        // Code to total price
        do
        {
            cout <<"Would you like another sandwich?? (1 for yes 2 for no): ";
            cin >> another;
            if (another == 1)
            {
                cout << "Enter another sandwich number: ";
                cin >> sandwich;
                if (sandwich == 1)
                {
                    total += HAM;
                    cout << "You selected Ham\n";
                }
                else if (sandwich == 2)
                {
                    total += VEGGIE;
                    cout << "You selected Veggie\n";
                }
                else if (sandwich == 3)
                {
                    total += RAT;
                    cout << "You selected Rat\n";
                }
            }            
            
        } while (another == 1);
                
    } while (another == 1);

    // Display total cost of sandwich(es)

    cout << "\nTotal cost for sandwich(es) is $" << total << endl;

    return 0;
}