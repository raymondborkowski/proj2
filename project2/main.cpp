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


int main(int argc, char ** argv)
{
    bool poor_man = false, binary=false, sorted = false, pairing = false;
    string fileName;
    fileName = getopt(argc, argv, poor_man, binary, sorted, pairing);
    ifstream b_file ("/Users/RJB/Documents/classes/eecs281/project2/" + fileName);
    
    
    
    
    return 0;
}

