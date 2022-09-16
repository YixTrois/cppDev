#include "Person.h"
#include <iostream>
#include "Tweeter.h"
#include "status.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Aadfads", "Bdssdfsdf", 120);
    {
        Tweeter t1("Someone", "Else", 456, "@sldfkja");
        std::string name2 = t1.getName();
    }

    cout << "after innner most block" << endl;
    string name = p1.getName();
    //int i = p1.arbitrarynumber;

    Status s = Pending;
    s = Approved;

    FileError fe = FileError::notfound;
    fe = FileError::ok;
    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;
    
    return 0;
}