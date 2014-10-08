//
//  main.cpp
//  p2.cpp
//
//  Created by Raymond Borkowski on 10/7/14.
//  Copyright (c) 2014 Raymond Borkowski. All rights reserved.
//

#include <iostream>
#include "functions.h"
#include <fstream>
#include <sstream>


int main(int argc, char ** argv)
{
    bool poor_man = false, binary=false, sorted = false, pairing = false;
    string temp;
    temp = getopt(argc, argv, poor_man, binary, sorted, pairing);
    ifstream b_file ("/Users/RJB/Documents/classes/eecs281/project2/project2/" + temp);
    getline(b_file, temp);
    string inputType = temp;
    cout<<inputType;
    
    if(inputType == "M"){
        
    }
    else if(inputType == "R"){
        
    }
    
    
    return 0;
}

