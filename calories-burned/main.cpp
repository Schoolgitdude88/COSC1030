//
// Robert Pilkington
// 02/19/2025
// Calories Burned Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;


int main ()
{
    //constants for calories per min
    const double Cals_Per_Minute = 3.9;

    int minutes; //number opf minutes
    double calories; // calories burned

    
    for (minutes = 10; minutes <=30; minutes += 5)
    {
        calories = minutes * Cals_Per_Minute;
        cout << "after " << minutes << " minutes you burned "
             << calories << " calories.\n";           


    }
    return 0;

}
