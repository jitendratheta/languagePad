//
//  SegTree.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 16/08/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#include "SegTree.h"
#include <iostream>

using namespace std;

const int MAX = 1000;
int arr[MAX];

void SegTree::initialize() {
    for (int i = 0; i < MAX; ++i) {
        arr[i] = i;
    }
}

void SegTree::test() {
    initialize();
    SegmentTree st(arr, MAX);
    st.buildTree(arr, 1, 0, MAX-1);
    cout << st.getValue<int>(1, 3) << endl;
    cout << st.getValue<int>(6, 10) << endl;
    st.update(10, 1);
    cout << st.getValue<int>(6, 10) << endl;
    cout << st.getValue<int>(22, 24) << endl;
}

void SegmentTreeNode::assignLeaf(int value) {
    sum = value;
}

void SegmentTreeNode::merge(SegmentTreeNode &left, SegmentTreeNode &right) {
    sum = left.sum + right.sum;
}

int SegmentTreeNode::getValue() {
    return sum;
}

template<typename T>
SegmentTree::SegmentTree(T arr[], int N) {
    this->N = N;
    nodes = new SegmentTreeNode[getSize(N)];
    buildTree(arr, 1, 0, N-1);
}

SegmentTree::~SegmentTree() {
    delete[] nodes;
}

int SegmentTree::getSize(int N) {
    int size = 1;
    for (; size < N; size <<= 1);
    return size << 1;
}

template<typename T>
void SegmentTree::buildTree(T *arr, int stIndex, int lo, int hi) {
    
    if (lo == hi) {
        nodes[stIndex].assignLeaf(arr[lo]);
        return;
    }
    
    int left = 2 * stIndex, right = left + 1, mid = (lo + hi) / 2;
    
    buildTree(arr, left, lo, mid);
    buildTree(arr, right, mid + 1, hi);
    
    nodes[stIndex].merge(nodes[left], nodes[right]);
}

template<typename V>
V SegmentTree::getValue(int lo, int hi) {
    SegmentTreeNode result = getValue(1, 0, N-1, lo, hi);
    return result.getValue();
}

SegmentTreeNode SegmentTree::getValue(int stIndex, int left, int right, int lo, int hi) {
    if (left == lo && right == hi)
        return nodes[stIndex];
    
    int mid = (left + right) / 2;
    if (lo > mid)
        return getValue(2*stIndex+1, mid+1, right, lo, hi);
    if (hi <= mid)
        return getValue(2*stIndex, left, mid, lo, hi);
    
    SegmentTreeNode leftResult = getValue(2*stIndex, left, mid, lo, mid);
    SegmentTreeNode rightResult = getValue(2*stIndex+1, mid+1, right, mid+1, hi);
    SegmentTreeNode result;
    result.merge(leftResult, rightResult);
    return result;
}

template<typename T>
void SegmentTree::update(int index, T value) {
    update(1, 0, N-1, index, value);
}

template<typename T>
void SegmentTree::update(int stIndex, int lo, int hi, int index, T value) {
    if (lo == hi) {
        nodes[stIndex].assignLeaf(value);
        return;
    }
    
    int left = 2 * stIndex, right = left + 1, mid = (lo + hi) / 2;
    if (index <= mid)
        update(left, lo, mid, index, value);
    else
        update(right, mid+1, hi, index, value);
    
    nodes[stIndex].merge(nodes[left], nodes[right]);
}
