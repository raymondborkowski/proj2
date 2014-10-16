//
//  functions.h
//  p2.cpp
//
//  Created by Raymond Borkowski on 10/7/14.
//  Copyright (c) 2014 Raymond Borkowski. All rights reserved.
//

#ifndef __p2_cpp__functions__
#define __p2_cpp__functions__

#include <iostream>
#include "getopt.h"
#include <vector>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <string.h>
#include "eecs281_priority_queue.h"
#include "poorman_priority_queue.h"
#include "sorted_priority_queue.h"
#include "heap_priority_queue.h"
#include "pairing_priority_queue.h"
#include <getopt.h>
#include <sstream>
#include <algorithm>


using namespace std;
struct mine {

};
struct mineOne{
    
};

void getopt(int argc, char ** argv, eecs281_priority_queue<mine*>*& heap);
int getInputMap(ifstream & file);
vector<string> getInputMapStart(ifstream & file);
vector<string> &split(const string &s, char delim, vector<string> &elems);

#endif /* defined(__p2_cpp__functions__) */
