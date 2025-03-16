//
// Robert Pilkington
// 03/15/2025
// Markup Programming Project
// COSC 1030
//


#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);

int main ()
{

    double wholesale; //wholesale cost
    double markupPercent; //Markup percentage
    double retail; //Retail price

    //Get the wholsale cost of the item
    cout << "enter the item's wholsale cost: ";
    cin >> wholesale;

    while (wholesale < 0)
    {
        cout << "Enter a non-negative value: ";
        cin >> wholesale;
    }

    //Get the item's markup percentage
    cout << "enter the item's markup percentage: ";
    cin >> markupPercent;

    while (markupPercent < 0)
    {
        cout << "Enter a non-negative value: ";
        cin >> markupPercent;
    }

    //Get the item's retail price
    retail = calculateRetail (wholesale, markupPercent);


    //Dispaly the items retail cost
    cout << " The retail price is $" << setprecision(2)
         << fixed << retail << endl;

        
return 0;
}


double calculateRetail (double wholesale, double markupPct)
{
    double markup = wholesale * markupPct / 100;
    return wholesale + markup;
}

























