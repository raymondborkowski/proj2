//
//  main.cpp
//  p2.cpp
//
//  Created by Raymond Borkowski on 10/7/14.
//  Copyright (c) 2014 Raymond Borkowski. All rights reserved.
//
#include <iostream>
#include "poorman_priority_queue.h"
#include "sorted_priority_queue.h"
#include "heap_priority_queue.h"
#include "eecs281_priority_queue.h"
#include <iostream>
#include "functions.h"

#include <vector>
#include <sstream>
#include "stdio.h"


int main(int argc, char ** argv)
{
    ios::sync_with_stdio (false);
    eecs281_priority_queue<mine*>* heap = nullptr;
    int roomSize, startRow, startCol;
    vector<string> contain;
    string temp;
    getopt(argc, argv, heap);
    //Will Remove file extension
    ifstream b_file ("/Users/RJB/Documents/classes/eecs281/project2/project2/" + temp);
    //Gets Input Type
    while (b_file.good()) {
        getline(b_file, temp);
        if(temp == "M"){
            roomSize = getInputMap(b_file);
            contain = getInputMapStart(b_file);
            startCol = stoi(contain.back());
            contain.pop_back();
            startRow = stoi(contain.back());
            
        }
        else if(temp == "R"){
            
        }
    }
    
    
    return 0;
}