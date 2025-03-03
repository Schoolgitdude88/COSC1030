//
// Robert Pilkington
// 03/01/2025
// Change for a Dollar Game Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()


{
    // Constants
    double OneDollar = 1.00;
    double Penny = 0.01;
    double Nickel = 0.05;
    double Dime = 0.10;
    double Quarter = 0.25;

    // Variables
    double Pennies, Nickels, Dimes, Quarters;
    double total;
    





    //Where the program asks for the coins
    cout << "This program will ask you for coins, your job is to give an amount of coins that is equal to one dollar.\n";
    cout << "How many Pennies do you have?\n";
    cin  >> Pennies;
    cout << "How many Nickels?\n";
    cin >> Nickels;
    cout << "how many Dimes?\n";
    cin >> Dimes;
    cout << "How many Quarters?\n";
    cin >> Quarters;

    // total variable
    total = ((Pennies * Penny) + (Nickels * Nickel) + (Dimes * Dime) + (Quarters * Quarter) );
    
    // Part where it calculates the coins and either asks to try again or congrats the user
    if (total == OneDollar)
        {
        cout << "you have $" << fixed << setprecision(2) << total << ", Congrats!\n";
        }
    else if (total < OneDollar)
        {
        cout << "You have less than a dollar, please try again.\n";    
        }
    else
        {
        cout << "You have more than one dollar, please try again.\n";
        }
return 0;
}

