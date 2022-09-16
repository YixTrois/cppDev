
#include "Person.h" // includes the same header as consuming code uses
#include <iostream>

using std::cout;
using std::endl;

Person::Person(std::string first, // use fully qualified name
                std::string last, // no return type
            int arbitrary)
            : // this colon introduces initializers
firstname(first),
lastname(last),
arbitrarynumber(arbitrary)
{
    // empty body is quite normal
    cout << "constructing" << getName() << endl;

}

Person::Person() : arbitrarynumber(0)
{
    cout << "constructing " << firstname << " " << lastname << endl;
}

Person::~Person()
{
    cout << "destructing " << firstname << " "<<lastname << endl;
}

std::string Person::getName() // Use fully qualified name
{
    return firstname + " " + lastname; // access member variables with no special syntax
}