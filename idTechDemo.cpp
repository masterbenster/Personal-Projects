// Demonstration for idTech
// Created by Brennan Sammis
// Do not share with anyone
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

int Main()
{
    int count = 0;
    bool isIterating = true;
    int[] array = new int[5];
    // Note: The array size is 5, this may not always be known
    for (int i = 0; i < array.size(); i++)
    {
        int[i] = 1;
        if (i == 3)
        {
            int[i] = 0;
        }
    }
    // Note: (isIterating==True) is the same as (isIterating)
    while (isIterating)
    {
        if (count == array.size()) // make sure we are still in our array
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
            count++ // this can also be count = count + 1;
        }
    }

    cout << "This is my final array: \n"; 
    cout <<"Array Values: "
    for (int i = 0; i < array.size(); i++)
    {
        cout<< i << " ";
    }
}