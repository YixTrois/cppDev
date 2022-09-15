
#include "Person.h" // includes the same header as consuming code uses

std::string Person::getName() // Use fully qualified name
{
    return firstname + " " + lastname; // access member variables with no special syntax
}