//
// Robert Pilkington            
// 02/06/2025
// Stadium Seating Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{

    // Constants for ticket prices
    const double CLASS_A_PRICE = 15.0;
    const double CLASS_B_PRICE = 12;
    const double CLASS_C_PRICE = 9;

    // Variables
    int classATickets; // Number of CLass A tickets sold
    int classBTickets; // Number of Class B tickets sold
    int classCTickets; // Number of class C tickets sold
    double total;      // Total revenue from ticket sales

    //Read the number of class A tickets sold
    cout << "Enter the number of class A tickets sold: ";
    cin >> classATickets;

    //Read the number of class A tickets sold
    cout << "Enter the number of class B tickets sold: ";
    cin >> classBTickets;

    //Read the number of class A tickets sold
    cout << "Enter the number of class C tickets sold: ";
    cin >> classCTickets;
    
    // Calculate the total revenue from ticket sales
    total = (classATickets * CLASS_A_PRICE) +
            (classBTickets * CLASS_B_PRICE) +
            (classCTickets * CLASS_C_PRICE);
    
    // Display the Total revenue
    cout << "The total revenue from ticket sales is $"
         << setprecision(2) << fixed << total << endl;

    return 0;


}

