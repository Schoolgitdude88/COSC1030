//
// Robert Pilkington
// 04/27/2025
// String Length Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int characters (const char* str)
{
    int count = 0;
    while (str[count] != '\0')
        {
        count++;
        }
    return count;
}

int main ()
{

    const int size = 500;
    char uInput[size];

    cout << "Enter what you want counted: ";
    cin.getline(uInput, size);

    int charCount = characters(uInput);

    cout << " the number of characters in this is: " << charCount << endl;


    return 0;

}