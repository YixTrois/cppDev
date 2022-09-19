#include <iostream>
#include "Person.h"
using std::cout;
using std::endl;


int PointerReferecePractices()
{
    int a = 3;
    cout << "a is " << a << endl;
    int& rA = a;   // now rA and a are the same thing in memory
    rA = 5;
    cout << "a is " << a << endl;

    Person Kate("Kate", "Gregory", 234);
    Person& rKate = Kate;
    rKate.SetNumber(345);
    cout << "rKate: " << rKate.GetName() << " " << rKate.GetNumber() << endl;

    int* pA = &a;
    *pA = 4;
    cout << "a is " << a << endl; // a is 4 
    int b = 100;
    pA = &b; // now we target pA to b
    (*pA)++; // now b = 101
    cout << "a " << a << ", *pA " << *pA << endl;

    Person* pKate = &Kate;
    (*pKate).SetNumber(235); // now Kate's arbitrary number == 235
    pKate->SetNumber(236); // now Kate's arbitrary number == 236
    cout << "Kate: " << Kate.GetName() << " " << Kate.GetNumber() << endl;
}