////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest 1 Problem A
/// \author     Iskander Sergazin
/// \version    0.1.1
/// \date       21.01.2021
///
/// Chess queen walks diagonally, horizontally or vertically. Two different checkerboard cells are given. Determine if the queen can get from the first square to the second in one move.
///
////////////////////////////////////////////////////////////////////////////////
#include <iostream>

int main()
{
    //Take Input
    int pos11;
    int pos12;
    int pos21;
    int pos22;
    std::cin >> pos11 >> pos12 >> pos21 >> pos22;
    //Check Vertically and Horizontally
    if ((pos11 == pos21) || (pos22 == pos12))
    {
        std::cout << "YES" << std::endl;
        return 0;
    }
    int dif1;
    dif1 = pos11 - pos21;
    int dif2;
    dif2 = pos12 - pos22;

    //Check Diagonal movement
    if (abs(dif1) == abs(dif2))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}
