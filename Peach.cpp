/*
Name: Tyler Kreider
Proj: C++ Peach demo 
File: Peach.cpp
Class: COMP-305 SP22
Prof: A. Nuzen
Description: Implementations of prototypes in Peach.h

1/ toString returns a string representation of object peach objects
2/ overload << insertion to output representation of object class peach
to console 

*/

#include <iostream>
#include <string>
#include "Peach.h" // user defined headers are included using double quotes

using   std::string,
        std::cout;

string Peach::toString(){
    return "Peach name " + name + " color " +  
            color + " variety " + variety + 
            " >> toString() <<\n";
}

bool Peach::operator<(Peach &other){
    return name < other.name;
}
/* overloading operator insertion is the preferred method
   return type is ostream, operator is operator<<
   the second paramerter is the address of the object class Peach
   thus we can use the dot notation instead of pointer ->
*/
std::ostream&  operator<<(std::ostream& Cout, Peach &p){
    Cout << "Peach name " << p.name
         << " color " << p.color
         << " variety " << p.variety
         << std::endl;
    return Cout;
}
