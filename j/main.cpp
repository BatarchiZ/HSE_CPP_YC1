//////////////////////////////////////////////////////////////////////////////////
///// \file
///// \brief      Main module for Contest 1 Problem J
///// \author     Iskander Sergazin
///// \version    0.2.0
///// \date       25.01.2021
/////
///// Copy the task description here.
/////
//////////////////////////////////////////////////////////////////////////////////
#include <iostream>

int main()
{
    int w0;
    int h0;
    int m0;
    int alarms;
    int w1;
    int h1;
    int m1;
    int dummyW = 10; //comparison weeks
    int dummyH = 100; //comparison hours
    int dummyM = 1000; //comparison minutes
    long dummyWres = 1000; //comparison next week
    long dummyHres = 10000; //comparison next week hours
    long dummyMres = 100000; //comparison next week minutes

    //Take Input
    std::cin >> w0 >> h0 >> m0;
    std::cin >> alarms;
    for (int i = 0; i < alarms; i++)
    {
        std::cin >> w1 >> h1 >> m1; //Take An Alarm
        if (w1 == 0)         //Exception daily alarms
        {
            //If next daily alarm is today
            if ((h1 == h0 and m1 >= m0) or h1 > h0)
            {
                w1 = w0;
            }
            if (w1 == 0) //If it is not today
            {
                w1 = w0 + 1;
                if (w1 == 8) //Account for 7th day daily alarm
                {
                    w1 = 1;
                }
            }
        }
        //Normal Cases (check w.r.t weeks -> hours -> minutes)
        if (w1 > w0 or (w1 == w0 and h1 > h0) or
            (w1 == w0 and h1 == h0 and m1 > m0) or
            (w1 == w0 and h1 == h0 and m1 == m0))
        {
            if (((w1 - w0) <= dummyW - w0) and  //Put this alarm as nearest if these conditions are true
                ((h1 - h0) <= dummyH - h0) and
                (m1 - m0) <= dummyM - m0)
            {
                dummyW = w1;
                dummyH = h1;
                dummyM = m1;
                continue;
            }
        }
        //Next Week Cases (Check w.r.t weeks -> hours -> minutes)
        if (((w1 + 7 - w0) < dummyWres + 7 - w0) or
            ((w1 + 7 - w0 == dummyWres + 7 - w0) and (h1 - h0 < dummyHres - h0)) or
            ((w1 + 7 - w0 == dummyWres + 7 - w0) and (h1 - h0 == dummyHres - h0) and
             (m1 - m0) <= dummyMres - m0))
        {
            dummyWres = w1;
            dummyHres = h1;
            dummyMres = m1;
        }
    }
    //If there is an alarm this week
    if (dummyW != 10)
    {
        std::cout << dummyW << " " << dummyH << " " << dummyM << " " << std::endl;
        return 0;
    }
    //If there are only alarms for next week
    std::cout << dummyWres << " " << dummyHres << " " << dummyMres << " " << std::endl;
    return 0;
}

//I can explain my ifs

