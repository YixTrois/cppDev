#include "Person.h"
int Dummy(Person p) { return p.GetNumber();}

int main()
{
    Person Kate("Kate", "Gregory", 345);
    Kate.AddResource();
    string s1 = Kate.GetResourceName();
    Kate.AddResource();
    Person Kate2 = Kate;
    int j = Dummy(Kate2);
    return 0; 
}