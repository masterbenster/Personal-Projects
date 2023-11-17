// Demonstration for idTech
// Created by Brennan Sammis
// Do not share with anyone
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <array>

int main()
{
    using std::cout;
    using std::endl;

    int count = 0;

    bool isIterating = true;
    int array[5] = {8,10,15,3,7};

    // Note: The array size is 5, this may not always be known
    for (int i = 0; i < sizeof(array); i++)
    {
        array[i] = 1;
        if (i == 3)
        {
            array[i] = 0;
        }
    }
    // Note: (isIterating==True) is the same as (isIterating)
    while (isIterating)
    {
        if (count == sizeof(array)) // make sure we are still in our array
        {
            count = 0; // reset the counter
        }
        else
        {
            if (array[count] == 0) // check arrays current value
            {
                isIterating = false; // set our while loop to false
                array[count] = -2;
            }
            count++; // this can also be count = count + 1;
        }
    }

    cout << "This is my final array: \n"; 
    cout <<"Array Values: ";
    for (int i = 0; i < sizeof(array); i++)
    {
        cout<< array[i] << " ";
    }

}