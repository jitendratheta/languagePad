//
//  Dijkstra.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 22/09/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#include "Dijkstra.h"
#include <iostream>

using namespace std;

void  Dijkstra::initialize() {
    
    while(1) {
        int a, b, dist;
        cin >> a >> b >> dist;
        if(a == -1)
            break;
        adj[a].push_back(make_pair(dist, b));
        adj[b].push_back(make_pair(dist, a));
    }
    
    for (int i = 0; i < MAX; ++i) {
        distance[i] = INT32_MAX;
    }
    
}


void Dijkstra::runDijkstra(int node) {
    
    Q.push(make_pair(0, node));
    distance[node] = 0;
    
    while(!Q.empty()) {
        //for(int i = 1; i < 7; ++i)  cout << (distance[i] == INT32_MAX ? -1 : distance[i]) << " "; cout << endl;
        Pair data = Q.top();
        Q.pop();
        for(Pair child: adj[data.second]) {
            if(distance[child.second] > distance[data.second] + child.first) {
                Q.push(make_pair(distance[data.second] + child.first, child.second));
                distance[child.second] = distance[data.second] + child.first;
            }
        }
    }
    
    for(int i = 0; i < MAX; ++i) {
        if(distance[i] != INT32_MAX) {
            cout << "1 to " << i << " = " << distance[i] <<  endl;
        }
    }
    
}

void Dijkstra::test() {
    initialize();
    runDijkstra(1);
}


/* sample input
 1 4 1
 4 6 6
 4 3 2
 6 3 2
 2 3 4
 2 1 10
 3 5 3
 2 5 1
 -1 -1 -1
 */
