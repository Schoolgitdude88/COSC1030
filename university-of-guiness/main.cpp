//
// Robert Pilkington
// 02/14/2025
// University of Guiness Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    // Constants/Variables
    // used to dertermine if the user is a resident or not
    char Resident;
    // Used to determine if the user needs room and board
    char RmBrd;
    // In state Tuition
    double InStateCost = 3000.0;
    // Out of State Tuition
    double OutStateCost = 4500.0;
    // In State room and board
    double InStateRmBrd = 2500.0;
    // Out of State Room and Board
    double OutStateRmBrd = 3500.0;

    // User inputs for Resident and RmBrd
    cout << "Are you a resident of this state? Y for Yes or N for No ";
    cin >> Resident;
        if (Resident != 'Y' && Resident != 'N' && Resident != 'y' && Resident != 'n') 
        {
            cout << " Please enter Y for yes or N for no. " << endl;
            return 0;
        }

    if (Resident == 'Y' || Resident == 'y') 
{
    // User inputs for Resident and RmBrd
        cout << "Do you require room and board? Y for Yes or N for No ";
        cin >> RmBrd;
            if (RmBrd != 'Y' && RmBrd != 'N' && RmBrd != 'y' && RmBrd != 'n')
            {
                cout << " Please enter Y for Yes or N for No. " << endl;
                return 0;
            }            
            if (RmBrd == 'Y' || RmBrd == 'y') 
            {
                double bill = InStateCost + InStateRmBrd;
                cout << "Your bill will be:  $" << setprecision(2) << fixed << bill << endl;
            }
            else 
            {  
                cout << "your Bill will be: $" << setprecision(2) << fixed << InStateCost << endl;
            }
return 0;
}    
    else (Resident == 'N' || Resident == 'n'); 
{
    // User inputs for Resident and RmBrd
    cout << "Do you require room and board? 1 for Yes or N for No ";
    cin >> RmBrd;
        if (RmBrd != 'Y' && RmBrd != 'N' && RmBrd != 'y' && RmBrd != 'n')
        {
            cout << " Please enter Y for Yes or N for No. " << endl;
            return 0;
        }            
        if (RmBrd == 'Y' || RmBrd == 'y') 
        {
            double bill = OutStateCost + OutStateRmBrd;
            cout << "Your bill will be:  $" << setprecision(2) << fixed << bill << endl;
        }   
        else  
        {  
            cout << "your Bill will be: $" << setprecision(2) << fixed << OutStateCost << endl;
        }

}



return 0;
}
        
        
        
    
