////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest 1 Problem 3
/// \author     Iskander Sergazin
/// \version    0.1.0
/// \date       25.01.2021
///
/// The length of the MKAD is 109 kilometers. Biker Vasya starts from the zero kilometer of the MKAD and travels at a speed of v kilometers per hour. At which mark will he stop after t hours?
///
////////////////////////////////////////////////////////////////////////////////
#include <iostream>

int main()
{
    //take input variables
    int velocity = 0;
    std::cin >> velocity;
    int time = 0;
    std::cin >> time;

    //Mathematical Operations
    if (velocity >= 0) //+ve velocity
    {
        int modulus;
        const int lengthMKAD = 109;
        modulus = (velocity * time) % lengthMKAD;
        std::cout << modulus;
        return 0;
    }
    else
    {
        int modulus;
        const int lengthMKAD = 109;
        modulus = (velocity * time) % lengthMKAD;
        modulus = 109 + modulus;
        modulus = modulus % lengthMKAD;
        std::cout << modulus;
        return 0;
    }
}
