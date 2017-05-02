//
//  readfile.cpp
//  Group project
//
//  Created by Brandon Aitken on 5/1/17.
//  Copyright © 2017 Brandon Aitken. All rights reserved.
//

#include "readfile.hpp"
#include <string>
#include <iostream>
#include <array>
#include <fstream>

extern int students[20][4];

using namespace std;

void readfile(){
    
    //add your code
    
  
        ifstream studentfile;
        studentfile.open("/Users/brandonaitken/students.txt");
        for(int i = 0; i < 19; i++){
            for(int b = 0; i < 3; i++){
                studentfile >> students[i][b];
                printf("studentfile: %d\n", students[i][b]);
            }
        }
        
        
        
        
        
    

    
   
    
}
