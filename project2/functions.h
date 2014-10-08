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
#include <stdio.h>
#include <string.h>

using namespace std;

string getopt(int argc, char ** argv, bool & poor_man,bool &binary, bool &sorted, bool &pairing);

#endif /* defined(__p2_cpp__functions__) */
