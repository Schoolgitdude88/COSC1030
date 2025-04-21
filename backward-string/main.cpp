//
// Robert Pilkington
// 04/20/2025
// Backward String Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
using namespace std;


// func prototype
void backward(char *);

int main()
{
    // define the array to hold input
    const int SIZE = 80;
    char input[SIZE];

    // get string from user
    cout << "Enter a string and I will enter it backward:\n";
    cin.getline(input, SIZE);

    //display input backward
    backward(input);
    return 0;

}

// thebackward function accepts apointer to a C-string and displays that string backward

void backward(char *str)
{
    // get the subscript of the last character in the string
    int last = strlen (str) -1;

    // work backward through the string displying each character from last to first
    for (int index = last; index >= 0; index --)
        cout << str[index];

        //end the line
    cout << endl;


}