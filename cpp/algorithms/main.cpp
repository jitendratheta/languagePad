//
//  main.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 02/04/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#include <iostream>
#include "Algorithm.h"
#include "NumberTheory/Sieve.h"
#include "NumberTheory/MultiplicativeInverse.h"
#include "Graph/DisjointSets.h"
#include "Query/SegTree.h"
#include "Graph/Dfs.h"
#include "Graph/Bfs.h"
#include "Graph/Dijkstra.h"
#include "BinarySearch/LIS.h"

int main(int argc, const char * argv[])
{
    Algorithm *alg = new LIS();
    alg->test();
    return 0;
}
