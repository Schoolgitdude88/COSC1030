//
// Robert Pilkington
// 03/30/2025
// Temperatures
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;


// define the tempurature array
typedef double dailyTempArr[50];

// find the average
double calcAverage(dailyTempArr temps, int n)
{
    double sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += temps[i];
    }
    return sum /n;
}

// Find highest temp
double fHighest(dailyTempArr temps, int n)
{
    double highest = temps[0];
    for (int i = 1; i < n; i++)
    {
        if (temps[i] > highest)
        {
            highest = temps[i];
        }
    }
    return highest;
}

// find lowest temp
double fLowest(dailyTempArr temps, int n)
{
    double lowest = temps[0];
    for (int i = 1; i < n; i++)
    {
        if (temps[i] < lowest)
        {
            lowest = temps[i];
        }
    }
    return lowest;
}

//start of main
int main()
{
int n;

dailyTempArr tempuratures;

//ask how many temps
    cout << " How many tempuratures up to 50 do you need to input. ";
    cin >> n;
// makes sure user can put in no more than 50 temps
    if(n > 50)
    {
        cout << " please input no more than 50 tempuratures";
        cin >> n;
    }


// input temps 
    cout << "Please enter " << n << " tempuratures:/n";
    for (int i = 0; i < n; i++)
    {
        cout << "Tempurature for day " << i + 1 << ": ";
        cin >> tempuratures[i];
    }

    //calculate and show average
    double average = calcAverage(tempuratures, n);
    cout << "The average tempuratures was: " << fixed << setprecision(2) << average << endl;

    // find and show the highest temp
    double highest = fHighest(tempuratures, n);
    cout << "The highest tempurature was: " << fixed << setprecision(2) << highest << endl;

    // find and show lowest
    double lowest = fLowest(tempuratures, n);
    cout << "The lowest tempurature was: " << fixed << setprecision(2) << lowest << endl;

    return 0;

}