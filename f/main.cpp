////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest 1 Problem F
/// \author     Iskander Sergazin
/// \version    0.1.0
/// \date       25.01.2021
///
/// Peter decided to print the multiplication table for the first n natural numbers. Since their work may turn out to be very large, Peter decided to replace the result with his remainder when dividing by the m integer. Mathematicians would say here that the multiplication table is in the Zm ring
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>


int main()
{
    unsigned int m, n;
    //Take Input
    std::cin >> n >> m;

    //Output
    std::cout << "\t";
    for (size_t i = 1; i <= n; ++i)
    {
        std::cout << i << "\t";
    }
    std::cout << std::endl;

    for (size_t x = 1; x <= n; ++x)
    {
        std::cout << x << '\t';
        for (size_t y = 1; y <= n; ++y)
        {
            std::cout << (x * y) % m << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}
