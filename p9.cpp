/*****************************************************************************************************
 * Brandon J. Fletcher                                                                                *
 * E-mail: brandon.fletcher@okstate.edu                                                               *
 * CS 2433: C/C++ Programming                                                                         *
 * 2016 Fall Semester                                                                                 *
 * Assignment: program9                                                                               *
 * Due date: November 28, 2016                                                                        *
 * Date submitted: /uk                                                                                *
 * Instructor: Richard Churchill                                                                      *
 *                                                                                                    *
 *  Build Instructions:                                                                               *
 *      •Open a Terminal on Unix/Linux System.                                                        *
 *      •Change Directories to p9.cpp location                                                        *
 *      •Use: g++ -o p9a p9.cpp (to compile)                                                          *
 *      •Run: ./p9a will run the program                                                              *
 *                                                                                                    *
 ******************************************************************************************************/

#include <iostream>
#include "SetClass.h"

using namespace std;

/*** Print class definition ***/

class Print {
    friend class SetClass;
    
    public:
        void print(SetClass a);
};

void Print::print(SetClass classToPrint) {
    
    for (int i = 0; i < 51; ++ i) {
        if (classToPrint.isElement(i) == true) {
            cout << i << " == true" << endl;
        } else {
            // Do Nothing
        }
    }
    
} // End of print() Method

/*** End definitions for Print class ***/

int main() {
    
    SetClass setClassTest; // Creates SetClass Object
    Print printer;
    
    setClassTest.add(4);
    setClassTest.add(9);
    setClassTest.isElement(4);
    printer.print(setClassTest);
    return 0;
}
