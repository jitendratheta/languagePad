//
//  DisjointSets.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 06/04/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#include "DisjointSets.h"
#include <iostream>

using namespace std;

const int MAX = 1005;
int set[MAX], size[MAX];

void DisjointSets::disjointSets(int N) {
    for (int i = 0; i < N; ++i) {
        set[i] = i;
        size[i] = i;
    }
}

int DisjointSets::get(int i) {
    if(set[i] == i) {
        return i;
    }
    return set[i] = get(set[i]);
}

bool DisjointSets::merge(int a, int b) {
    a = get(a);
    b = get(b);
    if(a == b)
        return false;
    if(size[a] > size[b]) {
        size[a] += size[b];
        set[b] = a;
    } else {
        size[b] += size[a];
        set[a] = b;
    }
    return true;
}

void DisjointSets::initialize() {
    disjointSets(MAX-1);
}

void DisjointSets::test() {
    initialize();
    merge(1, 4);
    merge(1, 6);
    merge(3, 5);
    merge(5, 2);
    merge(7, 3);
    
    for (int i = 0; i < 10; ++i) {
        printf("Group of %d is: %d\n", i, get(i));
    }
    
}