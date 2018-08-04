//
//  LIS.h
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 22/07/16.
//  Copyright (c) 2016 Jitendra S. Kushwaha. All rights reserved.
//

#ifndef __Codebase__LIS__
#define __Codebase__LIS__

#include "../Algorithm.h"
#include <vector>

using namespace std;

class LIS: public Algorithm {
public:
    virtual void initialize();
    virtual void test();
    vector<int> getLIS (vector<int> &arr);
};

#endif /* defined(__Codebase__LIS__) */
