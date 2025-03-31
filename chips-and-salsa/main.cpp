//
// Robert Pilkington
// 03/29/2025
// Chips and Salsa Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// function prototypes
void getSales(string[], int[], int);
int getTotal(int[], int);
int largestElement(int[], int);
int smallestElement(int[], int);

int main()
{

    // constant for the number of salsa types
    const int SALSA_TYPES = 5;

    // Array of salsa types
    string names[SALSA_TYPES] = {"mild", "medium", "sweet", "hot", "zesty"};

    //array of sales of each salsa type
    int sales[SALSA_TYPES];

    // Total number of jars sold
    int totalJarsSold;

    // subscript of the salsa that sold the most jars
    int highSalesProduct;

    // subscript of the salsa that sold the least jars
    int lowSalesProduct;

    // Get the number of jars sold for each type of salsa
    getSales(names, sales, SALSA_TYPES);

    // get teh totta sales and high and low selling products
    totalJarsSold = getTotal(sales, SALSA_TYPES);
    highSalesProduct = largestElement(sales, SALSA_TYPES);
    lowSalesProduct = smallestElement(sales, SALSA_TYPES);

    // Dispaly the sales report header
    cout << endl << endl;
    cout << "   Salsa Sales report \n\n";
    cout << "Name             Jars Sold \n";
    cout << "                           \n";
    
    // Display the name and Jars sold of each type
    for (int salsaType = 0; salsaType < SALSA_TYPES; salsaType++)
        {
            cout << setw(6) << names[salsaType]
                 << setw(21) << sales[salsaType]
                 << endl;
        }

        // Display the total, highest and lowest sales

        cout << "\nTotal Sales: " << setw(15) << totalJarsSold << endl;
        cout << "High Seller: " << names[highSalesProduct] << endl;
        cout << "Low Seller: " << names[lowSalesProduct] << endl;

        return 0;
}

// get sales. gety the number of jars of each salsa type sold from the user. The names parameter holds the names of the salsas, and the sales array parameter weill hold the numbers sold of each type of salsa.

void getSales(string names[], int sales[], int size)
{
    for (int type = 0; type < size; type++)
    {
        // get the muber of jars sold
        cout << "how many jars of " << names[ type]
        << " salsa did we sale last month? ";
        cin >> sales[type];

        // validate input
        while (sales[type] < 0)
            {
            cout << "jars sold must be 0 or more. Pleas re-enter: ";
            cin >>sales[type];
            }
    }

}

//Get total calculates and returns the total of the values stored in the array passed to function
int getTotal(int array[], int size)
{
    int total = 0;

    for (int pos = 0; pos < size; pos++)
        total += array[pos];

    return total;
}


// largestElement. finds and returns the subscript of the array position holding the largest value in the array passed to the function.
int largestElement(int array[], int size)
{
    int indexOfLargest = 0;

    for( int pos = 1; pos < size; pos++)
        {if (array[pos] > array[indexOfLargest])
            indexOfLargest =pos;
        }
        return indexOfLargest;
}

// smallestElement. finds and returns the subscript of the array position holding the smallest value in the array passed to the function.
int smallestElement(int array[], int size)
{
    int indexOfSmallest = 0;

    for ( int pos = 1; pos < size; pos++)
    {
        if (array[pos] < array[indexOfSmallest])
        {
            indexOfSmallest =pos;
        }
    }    
    return indexOfSmallest;
}