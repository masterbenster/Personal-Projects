// Demonstration for idTech
// Created by Brennan Sammis
// Do not share with anyone
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int count = 0;

    bool isIterating = true;
    string hello = "world";

    // Note: The array size is 5, this may not always be known
    for (int i = 0; i < hello.length(); i++)
    {
        hello[i] = 'a';
        if (i == 3)
        {
            hello[i] = 'c';
        }
    }

    // Note: (isIterating==True) is the same as (isIterating)
    while (isIterating)
    {
        if (count == hello.length()) // make sure we are still in our array
        {
            count = 0; // reset the counter
        }
        else
        {
            if (hello[count] == 'a') // check arrays current value
            {
                isIterating = false; // set our while loop to false
                hello[count] = 'b';
            }
            count++; // this can also be count = count + 1;
        }
    }

    cout << "This is my final array:" << endl; 
    cout <<"Array Values: ";
    for (int i = 0; i < hello.length(); i++)
    {
        cout<< hello[i] << " ";
    }
    cout <<endl; 
    
}