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
    private:
        int count;
};

void Print::print(SetClass classToPrint) {
    count = 0;
    
    for (int i = 0; i < 51; ++ i) {
        if (classToPrint.isElement(i) == true) {
            cout << i << " == true" << endl;
            count += 1;
        } else {
            // Do Nothing
        }
    }
    
    if (count == 0) {
        cout << "Set is empty" << endl;
    } else {
        count = 0;
    }
    
} // End of print() Method

/*** End definitions for Print class ***/

int main() {
    
    SetClass A;
    SetClass B;
    SetClass C;
    Print printer; // friend class of SetClass
    int currentUserInputA;
    
    /*** Implement Printing of Sets A, B, & C ***/
    printer.print(A);
    printer.print(B);
    printer.print(C);
    
    
    while (currentUserInputA != -1) {
        cout << "Enter Integers to Fill Set A [-1 to Quit]: ";
        cin >> currentUserInputA;
        
        
        
        cout << endl;
    }
    
    return 0;
}
