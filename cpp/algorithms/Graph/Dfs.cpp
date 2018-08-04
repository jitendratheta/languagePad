//
//  Dfs.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 22/09/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#include "Dfs.h"
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

/*
 * Give node pair as input which are connected. -1 to break
 */
void  Dfs::initialize() {
    
    while(1) {
        int a, b;
        cin >> a >> b;
        if(a == -1)
            break;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
}

void Dfs::runDfs(int node) {
    
    stack<int> st;
    st.push(node);
    visited[node] = true;
    while(!st.empty()) {
        node = st.top();
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

void Dfs::runDfsRecursive(int node) {
    
    if(visited[node] == true)
        return;
    visited[node] = true;
    cout << "visited " << node << endl;
    for(int i: adj[node]) {
        if(visited[i] == false) {
            cout << "childs " << i << endl;
            runDfsRecursive(i);
        }
    }
}

void Dfs::test() {
    initialize();
    //runDfs(1);
    runDfsRecursive(1);
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
