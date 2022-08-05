////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest 1 Problem I
/// \author     Iskander Sergazin
/// \version    0.1.0
/// \date       25.01.2021
///
/// The day after tomorrow
///
////////////////////////////////////////////////////////////////////////////////
#include <iostream>

int main()
{
    int d;
    int m;
    int y;
    std::cin >> d >> m >> y;
    //February
    if (m == 2)
    {
        //Leap Year
        if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
        {
            if (d == 28 || d == 29)
            {
                std::cout << (d + 2) % 29 << " " << m + 1 << " " << y << std::endl;
                return 0;
            }
            std::cout << d + 2 << " " << m << " " << y << std::endl;
            return 0;
        }
        //Not Leap Year
        if (d == 27 || d == 28)
        {
            std::cout << (d + 2) % 28 << " " << m + 1 << " " << y << std::endl;
            return 0;
        }
        std::cout << d + 2 << " " << m << " " << y << std::endl;
        return 0;
    }
    //31 day Months
    if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12)
    {
        if (m == 12 and (d == 30 || d == 31))
        {
            std::cout << (d + 2) % 31 << " " << 1 << " " << y + 1 << std::endl;
            return 0;
        }
        if (d == 30 || d == 31)
        {
            std::cout << (d + 2) % 31 << " " << m + 1 << " " << y << std::endl;
            return 0;
        }
        std::cout << d + 2 << " " << m << " " << y << std::endl;
        return 0;
    }
    //30 day Months
    if (m == 4 or m == 6 or m == 9 or m == 11)
    {
        if (d == 29 || d == 30)
        {
            std::cout << (d + 2) % 30 << " " << m + 1 << " " << y << std::endl;
            return 0;
        }
        std::cout << d + 2 << " " << m << " " << y << std::endl;
        return 0;
    }
    return 0;
}
