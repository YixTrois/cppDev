#include <iostream>
#include "Person.h"
using std::cout;
using std::endl;

int DoubleIt(int x)
{
    return x*2;
}

int ConstPractice()
{
    int i = 3;

    int const ci = 3;
    i = 4;
    // cannot do ci = 4

    int& ri = i;
    ri = 5; // now i = 5

    int const & cri = i;
    // can't do cri = 6 since it is a const

    // int& ncri = ci;

    int j = 10;
    int DoubleJ = d
}