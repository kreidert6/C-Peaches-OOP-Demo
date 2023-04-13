/*
Name: Tyler Kreider
Proj:  C++ Peach demo 
File: Peach.h
Class: COMP-305 SP22
Prof: A. Nuzen
Description: Peach class information
Header should contain:
1/ Attributes
2/ Constructor / Destructor
3/ Setters and getters
4/ Protypes
*/

/* In every header file we need to make sure that 
it is only included once */

#ifndef PEACH_H
#define PEACH_H
#include <string>
using std::string;


class Peach{
private:
    string name, color, variety;
public:

    Peach(string name, string color){
        this->name = name;
        this->color = color;
        setVariety("Generic");
    }
    ~Peach(){
            // destructor deallocate memory close io files etc
            // not used here
    }
    
    /***************  setters/getters  *******************/
    void setVariety(string variety){
        this->variety = variety;
    }
    void setColor(string color){
        this->color = color;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
    string getVariety(){
        return this->variety;
    }
    string getColor(){
        return this->color;
    }



    /***************  prototypes *******************/
    
    string toString();
    
    bool operator< (Peach &other);
    
    // overload insertion operator
    // friend allows ostream class to manipulate private attributes of Peach
    friend std::ostream& operator<<(std::ostream &, Peach &p);
};


#endif //PEACH_H
