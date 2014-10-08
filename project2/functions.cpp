//
//  functions.cpp
//  p2.cpp
//
//  Created by Raymond Borkowski on 10/7/14.
//  Copyright (c) 2014 Raymond Borkowski. All rights reserved.
//

#include "functions.h"

string getopt(int argc, char ** argv, bool & poor_man,bool &binary, bool &sorted, bool &pairing){
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
                    binary = true;
                    break;
                }
                else if(strcmp(optarg,"POOR_MAN")==0){
                    poor_man = true;
                    break;
                }
                else if(strcmp(optarg,"SORTED")==0){
                    sorted = true;
                    break;
                }
                else if (strcmp(optarg,"PAIRING")==0){
                    pairing = true;
                    break;
                }
            case 's':
                break;
            case 'h':
                cout << "This is a TNT game with priority Queues\n";
                exit(0);
        }
    }
    if(optind == '\0'){
        cerr<<"YOU FORGOT THE FILE DUMMY\n";
        exit(1);
    }
    return argv[optind];
}

