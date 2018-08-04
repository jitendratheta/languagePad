//
//  Bfs.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 22/09/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#include "Bfs.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
 * Give node pair as input which are connected. -1 to break
 */
void  Bfs::initialize() {
    
    while(1) {
        int a, b;
        cin >> a >> b;
        if(a == -1)
            break;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
}

void Bfs::runBfs(int node) {
    
    queue<int> st;
    st.push(node);
    visited[node] = true;
    while(!st.empty()) {
        node = st.front();
        cout << "visited " << node << endl;
        st.pop();
        for(int i: adj[node]) {
            if(visited[i] == false) {
                cout << "childs " << i << endl;
                visited[i] = true;
                st.push(i);
            }
        }
    }
}

void Bfs::test() {
    initialize();
    // we are running BFS with node 1 so it should be present
    runBfs(1);
}

/* sample input
 1 2
 2 3
 1 3
 1 0
 0 5
 5 6
 6 4
 6 3
 -1 -1
 */

