//
//  SegTree.h
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 16/08/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#ifndef __Codebase__SegTree__
#define __Codebase__SegTree__

#include "Algorithm.h"


// variables to store aggregate statistics and
// any other information required to merge these
// aggregate statistics to form parent nodes
struct SegmentTreeNode {
    
    int sum;
    
    void assignLeaf(int value);
    
    void merge(SegmentTreeNode& left, SegmentTreeNode& right);
    
    int getValue();
};


class SegmentTree {
    
    SegmentTreeNode *nodes;
    int N;
    
public:
    
    template<typename T>
    SegmentTree(T arr[], int N);
    
    ~SegmentTree();
    
    // get number of node in the tree
    int getSize(int N);
    
    template <typename T>
    void buildTree(T arr[], int stIndex, int lo, int hi);
    
    // V is the type of the required aggregate statistic
    template<typename V>
    V getValue(int lo, int hi);
    
    SegmentTreeNode getValue(int stIndex, int left, int right, int lo, int hi);
    
    template<typename T>
    void update(int index, T value);
    // nodes[stIndex] is responsible for segment [lo, hi]
    template<typename T>
    void update(int stIndex, int lo, int hi, int index, T value);
    
};

class SegTree: public Algorithm {
    virtual void initialize();
    virtual void test();
};

#endif /* defined(__Codebase__SegTree__) */
