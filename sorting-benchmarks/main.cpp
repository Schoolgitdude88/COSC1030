//
// Robert Pilkington
// 04/27/2025
// Sorting Benchmarks Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;


// prototypes
int bubbleSort(int[], int);
int selectionSort(int[], int);
void swap(int &, int &);

int main()
{   // array size
    const int size = 20;

    //identical arrays
    int arrayA[size] = {19, 10, 1, 11, 10, 9, 18, 13, 8, 14, 16, 6, 12, 14, 17, 3, 2, 15, 17, 14,};
    int arrayB[size] = {19, 10, 1, 11, 10, 9, 18, 13, 8, 14, 16, 6, 12, 14, 17, 3, 2, 15, 17, 14,};


    //bublesort sorting
    int bubbles = bubbleSort(arrayA, size);

    //selection sorting
    int selections = selectionSort(arrayB, size);


    //print the number of exchanges.
    cout << " Bubble sorting resulted in: " << bubbles << " exchanges." << endl;
    cout << " Selection sorting resulted in: " << selections << " exchanges." << endl;

return 0;
}

//sorts and counts using bubble sort
int bubbleSort(int array[], int size)
{
   int maxElement;
   int index;
   int exchanges = 0;

   for (maxElement = size - 1; maxElement > 0; maxElement--)
   {
      for (index = 0; index < maxElement; index++)
      {
         if (array[index] > array[index + 1])
         {
            swap(array[index], array[index + 1]);
            exchanges++;
         }
      }
   }
   return exchanges;
}

//sorts and counts using selection sort
int selectionSort(int array[], int size)
{
   int minIndex, minValue;
   int exchanges = 0;

   for (int start = 0; start < (size - 1); start++)
   {
      minIndex = start;
      minValue = array[start];
      for (int index = start + 1; index < size; index++)
      {
         if (array[index] < minValue)
         {
            minValue = array[index];
            minIndex = index;
         }
      }
      swap(array[minIndex], array[start]);
      exchanges++;
   }
   return exchanges;
}
// The swap function swaps a and b in memory.
void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}