//
// Robert Pilkington
// 01/31/2025
// Ocean Levels Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

//Start
int main ()

{
// Millimeters per year variable
double mmsperyear = 1.5;

// Millimeters per year multipliers
double oceanlevel5 = mmsperyear * 5.0;
double oceanlevel7 = mmsperyear * 7.0;
double oceanlevel10 = mmsperyear * 10.0;

// Printed Millimeters per year after being mulitplied
cout << "This program will display how much higher the ocean will be after 5, 7, and 10 years assuming a 1.5mm increase per year." << endl;
cout << "The ocean will be " << oceanlevel5 << "mms higher after 5 years." << endl;
cout << "The ocean will be " << oceanlevel7 << "mms higher after 7 years." << endl;
cout << "The ocean will be " << oceanlevel10 << "mms higher after 10 years." << endl;
}