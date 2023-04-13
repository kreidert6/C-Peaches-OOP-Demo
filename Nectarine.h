/*
Name: Tyler Kreider
Proj: C++ Peach demo 
File: Nectarine.h
Class: COMP-305 SP22
Prof: A. Nuzen
Description: Subclass Nectarine
Nectarine is a subclass of Peach. the only difference between
Peach and Nectarine is that no fuzz on the skin
*/

/* In every header file we need to make sure that 
it is only included once */

#ifndef  NECTARINE_H
#define NECTARINE_H


class Nectarine : public Peach{
    public:
        // constructor pass info to super class Peach      
        Nectarine(string name, string color): Peach(name, color){
        setVariety("Nectarine");
        }
        ~Nectarine(){
            // destructor deallocate memory close io files etc
            // not used here
        }
    /***************  setters/getters  *************/
    // none will use methods from super class
    /***************  prototypes *******************/
    // none will use methods from super class

};


#endif // ! NECTARINE_H
