//
// Robert Pilkington
// 04/13/2025
// Monthly Sales Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

double *sales = nullptr, //dynamic array
total = 0.0,  //accumulator
average; // for average sales
int numMonths; // for the number of months
int count; // counter variable


// get months of sales
cout << "How many months to calculate sales for? ";
cin >> numMonths;



// sales array
sales = new double[numMonths];


// sales for each month
cout << "Enter the amount of sales. \n";
for (count = 0; count < numMonths; count++)
{
            cout << "Month " << (count + 1) << ": ";
            cin >> sales[count];
}


// total sales
for (count = 0; count < numMonths; count++)
{
            total += sales[count];
}


// average sales
average = total / numMonths;


//Display results
cout << fixed << showpoint << setprecision(2);
cout << "\n\nTotal sales: $" << total << endl;
cout << "Average Sales: $" << average << endl;

// free memory
delete[] sales;
sales = nullptr;

return 0;



}
