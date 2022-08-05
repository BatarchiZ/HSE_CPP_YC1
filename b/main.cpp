////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest 1 Problem 2
/// \author     Iskander Sergazin
/// \version    0.1.0
/// \date       25.01.2021
///
/// You need to calculate the sum of digits of a nonnegative integer..
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{
    //take input
    std::string integer_str;
    std::getline(std::cin, integer_str);

    //read through input and split
    int sum = 0;
    for (int i = 0; i < integer_str.length(); i++)
    {
        sum += (integer_str[i] - '0'); //convert ASCII to integer

    }
    std::cout << sum;
    return 0;
}