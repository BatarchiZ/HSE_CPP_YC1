////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest 1 Problem E
/// \author     Iskander Sergazin
/// \version    0.1.1
/// \date       25.01.2021
///
/// Имеется N кг металлического сплава. Из него изготавливают заготовки массой K кг каждая. После этого из каждой заготовки вытачиваются детали массой M кг каждая (из каждой заготовки вытачивают максимально возможное количество деталей). Если от заготовок после этого что-то остается, то этот материал возвращают к началу производственного цикла и сплавляют с тем, что осталось при изготовлении заготовок. Если того сплава, который получился, достаточно для изготовления хотя бы одной заготовки, то из него снова изготавливают заготовки, из них – детали и т.д. Напишите программу, которая вычислит, какое количество деталей может быть получено по этой технологии из имеющихся исходно N кг сплава.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>


int main()
{
    //Take Input
    int n;
    int k;
    int m;
    std::cin >> n >> k >> m;

    if (m > k)
    {
        std::cout << 0;
        return 0;
    }

    //Optimise
    const int detailsPerBlank = k / m;
    const int residueInBlank = k % m;
    int blanksPerAlloy;
    int residueAlloy;
    int nDetails = 0;

    while (n >= k)
    {
        blanksPerAlloy = n / k;
        residueAlloy = n % k;
        nDetails += blanksPerAlloy * detailsPerBlank;
        n = residueAlloy + (residueInBlank * blanksPerAlloy);
    }
    //Output
    std::cout << nDetails;
    return 0;
}