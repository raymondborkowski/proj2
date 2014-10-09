//
//  main.cpp
//  p2.cpp
//
//  Created by Raymond Borkowski on 10/7/14.
//  Copyright (c) 2014 Raymond Borkowski. All rights reserved.
//
/*
#include <iostream>
#include "functions.h"
#include <fstream>
#include <sstream>
#include "stdio.h"


int main(int argc, char ** argv)
{
    bool poor_man = false, binary=false, sorted = false, pairing = false;
    string temp;
    temp = getopt(argc, argv, poor_man, binary, sorted, pairing);
    //Will Remove file extension
    ifstream b_file ("/Users/RJB/Documents/classes/eecs281/project2/project2/" + temp);
    //Gets Input Type
    getline(b_file, temp);
    string inputType = temp;
    //Throws away "Size:"
    getline(b_file, temp, ':');
    //gets the size number
    getline(b_file, temp);
    int roomSize = stoi(temp);

    
    
    
    if(inputType == "M"){
        
    }
    else if(inputType == "R"){
        
    }
    
    
    return 0;
}

*/