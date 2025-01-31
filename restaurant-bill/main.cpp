//
// Robert Pilkington    
// 01/30/2029
// Restaurant Bill Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;


int main ()
{

// Get the amount of the purchase. 
double meal = 88.67;

// Calculate the sales tax.
double tax = meal * 0.0675;

// Constants for the tax rate and tip percentage
double subtotal = meal + tax;

// Calculate the tip.
double tip = subtotal * 0.20;

// Calculate the total of the sale.
double total = subtotal + tip;

// Print information about the sale.
cout << "Meal: cost " << meal << endl;
cout << "Tax: " << tax << endl;
cout << "Tip: " << tip << endl;
cout << "Total: " << total << endl; 
 
 
 return 0;
}