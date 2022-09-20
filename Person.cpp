
#include "Person.h" // includes the same header as consuming code uses
#include <iostream>

using std::cout;
using std::endl;

Person::Person(std::string first, // use fully qualified name
                std::string last, // no return type
            int arbitrary,
            pResource(nullptr))
            : // this colon introduces initializers
firstname(first),
lastname(last),
arbitrarynumber(arbitrary)
{
    // empty body is quite normal
    cout << "constructing" << GetName() << endl;

}

// Person::Person() : arbitrarynumber(0)
// {
//     cout << "constructing " << GetName() << endl;
// }

std::string Person::GetName() const// Use fully qualified name
{
    return firstname + " " + lastname; // access member variables with no special syntax
}

void Person::AddResource()
{
    pResource.reset();
    pResource=std::make_shared<Resource>{"Resource for" + GetName()}
}

// Person::Person(Person const & p) // this is a copy constructor, we only need to know the resource, we don't have an existing object to deal with
// {
//     pResource = new Resource(p.pResource->GetName());
// }

// Person& Person::operator=(const Person& p)
// {
//     delete pResource;
//     pResource = new Resource(p.pResource->GetName());
//     return *this;
// }