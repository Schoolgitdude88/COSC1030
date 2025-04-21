//
// Robert Pilkington
// 04/20/2025
// Pig Latin Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
using namespace std;

// func prototype
void pigLatin(char *);

int main()
{
    // define the array to hold input
    const int SIZE = 80;
    char input[SIZE];

    // get string from user
    cout << "Enter a sentence and I will translate it to pig latin:\n";
    cin.getline(input, SIZE);

    //display input backward
    pigLatin(input);
    return 0;

}

void pigLatin(char *sentence)
{
const char *vowels = "AEIOUaeiou";









}