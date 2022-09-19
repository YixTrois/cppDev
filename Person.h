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
        std::string GetName() const;  // const means it won't cahnge any of the member variables of the class
        int GetNumber() const {return arbitrarynumber;}
        void SetNumber(int number) {arbitrarynumber = number;}
         // don't have to code them, just declare them
};    // don't forget the semicolon

