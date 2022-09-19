
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
    cout << "constructing" << GetName() << endl;

}

Person::Person() : arbitrarynumber(0)
{
    cout << "constructing " << GetName() << endl;
}

Person::~Person()
{
    cout << "destructing " << GetName() << endl;
}

std::string Person::GetName() const// Use fully qualified name
{
    return firstname + " " + lastname; // access member variables with no special syntax
}