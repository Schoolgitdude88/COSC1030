//
// Robert Pilkington
// 02/14/2025
// Time Calculator Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main()
{

    //Constants
    const double SECONDS_PER_MINUTE = 60.0; //SECONDS IN A MINUTE
    const double SECONDS_PER_HOUR = 3600.0; //SECONDS IN AN HOUR
    const double SECONDS_PER_DAY = 86400.0 ; // SECONDS IN A DAY
    
    //Variable to hold the number of seconds
    int seconds;

    //Get a number of seconds
    cout << "enter a number of seconds: ";
    cin >> seconds;

    //Display the number of seconds
    if (seconds >= SECONDS_PER_MINUTE)
    {
       double minutes = seconds / SECONDS_PER_MINUTE;
       cout << "there are " << minutes
       << " minutes in " << seconds
       << " seconds. ";
    }

    //Display the number of seconds
    if (seconds >= SECONDS_PER_HOUR)
    {
        double hours = seconds / SECONDS_PER_HOUR;
        cout << "there are " << hours
        << " hours in " << seconds
        << " seconds. ";
    }

    //Display the number of seconds
    if (seconds >= SECONDS_PER_DAY)
    {
        double days = seconds / SECONDS_PER_DAY;
        cout << "there are " << days
        << " days in " << seconds
        << " seconds. ";
    }

    return 0;
}
    