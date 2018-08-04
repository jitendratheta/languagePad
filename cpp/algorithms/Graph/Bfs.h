//
//  Bfs.h
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 22/09/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#ifndef __Codebase__Bfs__
#define __Codebase__Bfs__

#include <stdio.h>
#include <vector>
#include "Algorithm.h"

#define MAX 1000

using namespace std;

class Bfs: public Algorithm {

    vector<int> adj[MAX];
    bool visited[MAX];

public:
    virtual void initialize();
    virtual void test();
    void runBfs(int node);
};

#endif /* defined(__Codebase__Bfs__) */
