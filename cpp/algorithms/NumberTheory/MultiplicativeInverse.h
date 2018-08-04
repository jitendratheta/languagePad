//
//  MultiplicativeInverse.h
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 05/04/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#ifndef __Codebase__MultiplicativeInverse__
#define __Codebase__MultiplicativeInverse__

#include <stdio.h>
#include <utility>
#include "../Algorithm.h"
using namespace std;

class MultiplicativeInverse: public Algorithm {
public:
    int modInverse(int n, int mod);
    int extendedEuclidean(ll n, int mod);
    pair<int, pair<int, int> > extendedEuclid(int a, int b);
    ll gcd(ll a, ll b);
    virtual void initialize();
    virtual void test();
};

#endif /* defined(__Codebase__MultiplicativeInverse__) */
