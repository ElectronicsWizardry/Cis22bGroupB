//
//  main.cpp
//  Group project
//
//  Created by Brandon Aitken on 4/26/17.
//  Copyright © 2017 Brandon Aitken. All rights reserved.
//

#include <iostream>
#include <array>
#include <fstream>

#include <string>

#include "readfile.hpp"


using namespace std;

int students[20][4];
//this will use 20 students for now, with the first name, last name, student number, then gpa
void readfile();

void outputarray();

int main() {
    

    
    readfile();
    outputarray();
    int option;
    cout << "Welcome to the student sorter" << endl <<
            " Please select a option to continue" << endl <<
            "1. Search for names and grades" << endl <<
            "2. Sort students by firstname, lastname, gpa, and ID number" << endl <<
            "3. Add students" << endl <<
            "4. Remove students" << endl <<
            "5. Save and quit" << endl;
    cin >> option;
    cout << endl << option << endl;
        
    switch(option){
            
        case 1:
            cout << "option 1";
            break;
        case 2:
            cout << "option 2" << endl;
            break;
        case 3:
            cout << "option 3" << endl;
            // TODO: code goes here
            break;
        case 4:
            cout << "option 4" << endl;
            // FIXME: help
            break;
        default:
            cout << "not a valid choice" << endl;
            break;
    }
   
}





void outputarray(){
    cout << "test";
    for(int i = 0; i < 19; i++){
        for(int b = 0; i < 3; i++){
            cout << students[i][b];
         //   cout << "test";
        }
    }
    
    
    
}
