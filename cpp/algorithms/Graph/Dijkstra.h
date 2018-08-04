//
//  Dijkstra.h
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 22/09/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#ifndef __Codebase__Dijkstra__
#define __Codebase__Dijkstra__

#include <stdio.h>
#include <queue>
#include "Algorithm.h"

#define MAX 1000

using namespace std;

class Dijkstra: public Algorithm {
    
    typedef pair<int, int> Pair;
    priority_queue< Pair, vector<Pair>, greater<Pair> > Q;
    vector<Pair> adj[MAX];
    int distance[MAX];
    
public:
    virtual void initialize();
    virtual void test();
    void runDijkstra(int node);
};

#endif /* defined(__Codebase__Dijkstra__) */
