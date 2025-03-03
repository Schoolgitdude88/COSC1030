//
// Robert Pilkington
// 03/02/2025
// Hotel Occupancy Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int HotelFloors = 0;
    int FloorRooms = 0;
    int TotalRooms = 0;
    int OccupiedRooms = 0;
    int TotalOccupiedRooms = 0;
    double PercentOccupied = 0.00;

    cout << "how many floors in this hotel?\n";
    cin >> HotelFloors;

    while (HotelFloors < 1)
    {
    cout << "Number of floors must be greater than 1.\n";
    cin >> HotelFloors;
    }

    for (int Hfloors = 1; Hfloors <= HotelFloors; Hfloors++)
    {
        if (Hfloors != 13)
        {
            cout << "How many rooms on this floor?\n";
            cin >> FloorRooms;

            while (FloorRooms < 10 )
            {
            cout << "Please enter a number that is 10 or greater.\n";
            cin >> FloorRooms;
            }
            cout << "how many rooms have occupants?\n";
            cin >> OccupiedRooms;

            TotalRooms += FloorRooms;
            TotalOccupiedRooms += OccupiedRooms;
        }
    }

    PercentOccupied = (TotalRooms / TotalOccupiedRooms);
    
   
    cout << "This hotel has " << HotelFloors << " floors.\n";
    cout << "There are " << TotalRooms << " rooms in this hotel.\n";
    cout << TotalOccupiedRooms << " of the rooms have occupants.\n";
    cout << fixed << setprecision(2) << PercentOccupied << " Percent of the rooms are occupied.\n";

return 0;


}