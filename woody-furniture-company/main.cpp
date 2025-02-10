//
// Robert Pilkington            
// 02/06/2025
// Woody Furniture Company Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

    //Constants for prices
    const double AMCOLONIALPR = 85.0;
    const double MODERNPR = 57.50;
    const double FRCLASSICALPR = 127.75;
    

    //Variables
    int americancolonial; // Number of american colonial sold
    int modern; // Number of modern sold
    int frenchclassical; // Number of french classical sold

    // Initialise variables and get totals of each type
    double Tamericancolonial;
    double Tmodern;
    double Tfrenchclassical;

    
    //Read the number of each type of furniture sold
    cout << "Enter how many American Colonial furnitures sold: ";
    cin >> americancolonial;

    cout << "Enter how many Modern furnitures sold ";
    cin >> modern;

    cout << "Enter how many French Classical furnitures sold ";
    cin >> frenchclassical;


    Tamericancolonial =  americancolonial * AMCOLONIALPR;
    Tmodern = modern * MODERNPR;
    Tfrenchclassical = frenchclassical * FRCLASSICALPR;
    
    cout << "Total revenue from American Colonial furniture is $"
    << setprecision(2) << fixed << Tamericancolonial << endl;

    cout << "Total revenue from Modern furniture is $" 
    << setprecision(2) << fixed << Tmodern << endl;

    cout << "Total revenue from French Classical furniture is $"
    << setprecision(2) << fixed << Tfrenchclassical << endl;

   // Calculate the total revenue from all furniture sales
    double total = (Tamericancolonial) +
                   (Tmodern) +
                   (Tfrenchclassical);

    // Display the Total revenue
    cout << "The total revenue from furniture sales is $"
         << setprecision(2) << fixed << total << endl;


    return 0;
}