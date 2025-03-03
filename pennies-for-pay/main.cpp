//
// Robert Pilkington
// 03/01/2025
// Pennies for Pay Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double DaysWorked = 0;
double DailyWage = 0.01;
double Total = 0.00;

    cout << "How many days Have you worked this pay period?\n";
    cin >> DaysWorked;

    while (DaysWorked < 1)
    {
    cout << " You must have worked at least one day to make a wage.\n";
    cin >> DaysWorked;
    }
    
    cout << "\nDay \tDaily Pay.\n";

    for (int Days = 1; Days <= DaysWorked; Days++)
    
    {
    cout << Days << "\t$"<< fixed << setprecision(2) << DailyWage << endl;
    Total += DailyWage;
    DailyWage *= 2;
    }

    cout << "\nTotal earnings after " << DaysWorked << " days: $" << fixed << setprecision(2) << Total << endl; 







    









return 0;


}
