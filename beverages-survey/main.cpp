//
// Robert Pilkington
// 02/19/2025
// Beverages Survey Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;


int main()


{
    int Coffee = 0, Tea = 0, Coke = 0, OrangeJuice = 0;
    int choice;

    
       
    
    cout << "This is a survey to tally favorite beverages.\n"
        << "Please enter what your favorite beverage is from among the choices.\n"
        <<"1 for Coffee, 2 for Tea, 3 for Coke, and 4 for Orange Juice.\n"
        << "Enter -1 to end the program.\n";
    


    do  {
        cout << "Choose your beverage.\n";
        cin >> choice;

        switch (choice)
        { 
        case 1:
            Coffee++;
            cout << "you picked coffee.\n";
            break;
        case 2:
            Tea++;
            cout << "You picked Tea.\n";
            break;
        case 3:
            Coke++;
            cout << "You picked Coke.\n";
            break;
        case 4:
            OrangeJuice++;
            cout << "You picked Orange Juice.\n";
            break;
        default:
            cout << "Please pick 1,2,3, or 4 to pick or -1 to quit.\n";
            break;
        }
    
        }while (choice != -1);

cout << "The results are in.\n";
cout << "Coffee finished with " << Coffee << " votes.\n";
cout << "Tea finished with " << Tea << " votes.\n";
cout << "Coke finished with " << Coke << " votes.\n";
cout << "Orange juice finished with " << OrangeJuice << " votes.\n";

    










return 0;
}
























    
