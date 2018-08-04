//
//  DisjointSets.h
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 06/04/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#ifndef __Codebase__DisjointSets__
#define __Codebase__DisjointSets__

#include <stdio.h>
#include "Algorithm.h"

class DisjointSets: public Algorithm {
public:
    void disjointSets(int N);
    int get(int i);
    bool merge(int a, int b);
    virtual void initialize();
    virtual void test();
};
#endif /* defined(__Codebase__DisjointSets__) */
