////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest 1 Problem H
/// \author     Sergazin Iskander
/// \version    0.1.0
/// \date       25.01.2021
///
/// Copy the task description here.
///
////////////////////////////////////////////////////////////////////////////////





#include <iostream>

int main()
{
    //Declare Variables
    int length;
    std::cin >> length;
    long large_list[200000] = {0};

    //Take Input, put into array
    for (int i = 0; i < length; ++i)
    {
        std::cin >> large_list[i];
    }

    int k = 1;
    //Count the 'index' number and put this number into a new array
    for (int j = 1; j < length + 1; j++)
    {
        while (large_list[k - 1] != j)
        {
            k++;
        }
        std::cout << k << " ";
        k = 0;
    }
    return 0;
}


