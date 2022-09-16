#pragma once
#include <string>
class Person // the keyword class introduces the declaration
{
    private: // member variables are generally private
        std::string firstname; 
        std::string lastname;
        int arbitrarynumber;
    
    public: // functions are generally public
        Person(std::string first, std::string last, int arbitrary); // this is the constructor
        Person();
        ~Person();
        std::string getName(); // don't have to code them, just declare them
};    // don't forget the semicolon

