//
//  Utils.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 03/04/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#include "Utils.h"
#include <iostream>

using namespace std;

clock_t timeStart() {
    return clock();
}

void timeStop(string func, clock_t startTime) {
    cout <<  func << " took time: " <<
        double(clock() - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
}