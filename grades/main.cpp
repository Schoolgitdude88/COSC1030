//
// Robert Pilkington
// 03/16/2025
// Grades Programming Project
// COSC 1030
//


#include <iostream>
#include <iomanip>
using namespace std;


//
// Robert Pilkington
// 03/16/2025
// Grades Programming Project
// COSC 1030
//


#include <iostream>
#include <iomanip>
using namespace std;


//  calculate average
void getAverage(int totalGrades, int numGrades, double &average)
{
    if (numGrades > 0)
    {
        average = totalGrades / numGrades;  
    }
    else
    {
        average = 0;
    }
}

int main()
{
    int numGrades;
    int gradeInput;
    int totalGrades = 0;  // grade accumulator
    double average;
    char grade;

    // Get the number of grades
    cout << "How many grades to average? ";
    cin >> numGrades;

    if (numGrades <= 0)
    {
        cout << "Please enter a number greater than 0." << endl;
        return 1;
    }

    // Enter grades
    for (int i = 0; i < numGrades; ++i)
    {
        cout << "Grade " << (i + 1) << ": ";
        cin >> gradeInput;
        totalGrades += gradeInput;  // Add to sum
    }

    // do the average calculation
    getAverage(totalGrades, numGrades, average);

    // Determine letter grade
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Dispaly grade
    cout << fixed << setprecision(2);
    cout << "Grade average: " << average << endl;
    cout << "The grade is: " << grade << endl;

    return 0;
}