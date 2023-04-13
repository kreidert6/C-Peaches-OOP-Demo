/*
Name: Tyler Kreider
Proj: C++ Peach demo 
File: testPeach.cpp
Class: COMP-305 SP22
Prof: A. Nuzen
Description:
1/ testPeach.cpp driver test program should be separated from the classes for 
testability and maintainability
2/ How to create a method of class Peach toString()
3/ Overloading insertion operator << to ouput Peach objects
4/ Nectarine is a subclass of Peach

    cout << "**** UC#1 create peach and nectarine objects ****\n";
    cout << "**** Multiline string as-is format in c++ ****\n";
    cout << "**** UC#3 Vector Peaches range-based Loop auto ****" <<endl;  
    cout << "**** UC#4 update peaches vector ****" <<endl; 
    cout << "**** UC#5 pop_back peaches vector ****" <<endl;       
    cout << "**** UC#6 sorting ascending ****" << endl; 
    cout << "**** UC#7 sorting descending using lambda expression ****\n";  
       
Sample output:
Peach name Ventura color Yellow variety Generic >> toString() <<
Peach name Ventura color Yellow variety Generic
Peach name Mono color White variety Generic
Peach name Melba color Yellow variety Nectarine

*/

#include <iostream>
#include <algorithm>
#include <vector>
#include "Peach.h"
#include "Nectarine.h"


using std::cout, std::endl, std::sort, std::vector;

class Mom {
    public:
    void brains(){
        cout << "I'm smart!\n";

    }   
};

class Dad {
    public:
    void brawn(){
        cout << "I'm strong!\n";
    }
};

class Child : public Dad, public Mom {

};
int main(int argc, char *argv[]) {
    
    Child tyler;
    tyler.brawn();
    tyler.brains();
    
    /* create two Peach objects */
    cout << "**** UC#1 create peach and nectarine objects ****\n";

    Peach ventura ("Ventura","Yellow");
    Peach mono ("Mono","White");

    // create object melba as subclass of Peach
    Nectarine melba ("Melba","Yellow");

    cout<<ventura.toString();	// demo method within a C++ class
    cout<<ventura;		        // overloading insertion to print obj

    cout<<mono;
    cout<<melba;
    
    cout << "**** Multiline string as-is format in c++ ****\n";

    const string NECTARINE= "\
                                Nectarine (yellow) is actually a peach \
                                without the fuzz on skin.\n";
    cout << NECTARINE;
    cout << "**** UC#3 Vector Peaches range-based Loop auto ****" <<endl;  
    
    //implicit array
    const int arr[]= {3,0,10,11};
    vector<Peach> peaches = {
        Nectarine ("Milo", "Green"), 
        
        Peach("Gogo", "Yellow"),
        Peach("Freestone", "Yellow")
    };

    cout << "size of peaches: " << peaches.size() << endl;

    for (auto p: peaches) 
        cout << p;

    cout << "**** UC#4 update peaches vector ****" <<endl; 
    peaches.push_back(Nectarine("Arctic", "White"));
    peaches.push_back(Nectarine("Klondike", "White"));
    for (auto p: peaches) 
        cout << p;

    cout << "**** UC#5 pop_back peaches vector ****" <<endl;    
    peaches.pop_back();
    peaches.at(1) = Peach("Sierra", "White");
    for (auto p: peaches) 
        cout << p;

    cout << "**** UC#6 sorting ascending ****" << endl; 
    sort(peaches.begin(), peaches.end());
    for (auto p: peaches) 
        cout << p;

    cout << "**** UC#7 sorting descending using lambda expression ****\n"; 
    auto greater = [] (Peach x, Peach y){
        return (x.getName() > y.getName());
    };

    sort(peaches.begin(), peaches.end(), greater);
    for (auto p: peaches) 
        cout << p;
    cout << "Bye...\n";
 
   return 0;
}
