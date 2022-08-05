////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest 1 Problem 3
/// \author     Iskander Sergazin
/// \version    0.1.2
/// \date       25.01.2021
///
/// By given n compute a sequence
///Dont user power function. Complexity should be O(n). Also try to avoid if instruction
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    //Take input
    int n;
    std::cin >> n;

    //Start a recursive loop
    double start = 1.0;
    double recursive1 = -1.0;

    for (int i = 2; abs(i) < n + 1; (i++))
    {
        start = start + recursive1 / i;
        recursive1 = recursive1 * (-1);
    }

    //Output
    std::cout << start;
    return 0;
}
