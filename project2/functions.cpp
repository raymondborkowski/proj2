//
//  functions.cpp
//  p2.cpp
//
//  Created by Raymond Borkowski on 10/7/14.
//  Copyright (c) 2014 Raymond Borkowski. All rights reserved.
//

#include "functions.h"

void getopt(int argc, char ** argv, eecs281_priority_queue<mine*>*& heap){
    struct option longOpts[] = {
        {
            "container", required_argument, NULL, 'c'
        } , {
            "stats", required_argument , NULL, 'q'
        } , {
            "help", no_argument, NULL, 'h'}
    };
    int opt = 0, index = 0;
    while((opt = getopt_long (argc, argv, "c:s:h", longOpts, &index)) != -1){
        switch(opt) {
            case 'c':
                if(strcmp(optarg,"BINARY")==0){
                    heap = new heap_priority_queue<mine*>();
                    break;
                }
                else if(strcmp(optarg,"POOR_MAN")==0){
                    heap = new poorman_priority_queue<mine*>;
                    break;
                }
                else if(strcmp(optarg,"SORTED")==0){
                    heap = new sorted_priority_queue<mine*>;
                    break;
                }
                else if (strcmp(optarg,"PAIRING")==0){
                    //need to change
                    heap = new poorman_priority_queue<mine*>;
                    break;
                }
                else{
                    cerr<<"YOU FORGOT THE FILE DUMMY\n";
                    exit(1);
                }
            case 's':
                if(optarg){
                    
                }
                break;
            case 'h':
                cout << "This is a TNT game with priority Queues\n";
                exit(0);
            default:
                cerr<<"You did something wrong";
                exit(1);
        }
    }
    if(optind == '\0'){
        cerr<<"YOU FORGOT THE FILE DUMMY\n";
        exit(1);
    }
}

vector<string> &split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

int getInputMap(ifstream & file){
    string temp;
    getline(file, temp);
    istringstream buf(temp);
    istream_iterator<string> beg(buf), end;
    vector<string> tokens(beg, end);
    temp = tokens.back();
    tokens.pop_back();
    
    return stoi(temp);
}
vector<string> getInputMapStart(ifstream & file){
    string temp;
    getline(file, temp);
    istringstream buf(temp);
    istream_iterator<string> beg(buf), end;
    vector<string> tokens(beg, end);
    
    return tokens;
}




