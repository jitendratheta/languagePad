//
//  MultiplicativeInverse.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 05/04/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#include "MultiplicativeInverse.h"
#include "../Utils.h"
#include <iostream>

using namespace std;

int MultiplicativeInverse::modInverse(int n, int mod) {
    // mod is prime, so n^(mod-1) ~= 1<mod>mod
    ll res = 1;
    ll mulFactor = n;
    int pow = mod - 2;
    while(pow > 0) {
        if(pow % 2 == 1) {
            res = (res * mulFactor) % mod;
        }
        mulFactor = (mulFactor * mulFactor) % mod;
        pow >>= 1;
    }
    return (int)res;
}

// https://comeoncodeon.wordpress.com/
/* This function return the gcd of a and b followed by
 the pair x and y of equation ax + by = gcd(a,b)*/
// usage for call: (extendedEuclid(a, m).second.first + m) % m;
pair<int, pair<int, int> > MultiplicativeInverse::extendedEuclid(int a, int b) {
    int x = 1, y = 0;
    int xLast = 0, yLast = 1;
    int q, r, m, n;
    while(a != 0) {
        q = b / a;
        r = b % a;
        m = xLast - q * x;
        n = yLast - q * y;
        xLast = x, yLast = y;
        x = m, y = n;
        b = a, a = r;
    }
    return make_pair(b, make_pair(xLast, yLast));
}

int MultiplicativeInverse::extendedEuclidean(ll n, int mod) {
    // nx - mq = 1
    ll b0 = mod, t, q;
    ll x0 = 0, x1 = 1;
    int mod1 = mod;
    if (mod == 1)
        return 1;
    while (n > 1) {
        q = n / mod;
        t = mod, mod = n % mod, n = t;
        t = x0, x0 = x1 - q * x0, x1 = t;
    }
    if (x1 < 0)
        x1 += b0;
    return x1 % mod1;
}

ll MultiplicativeInverse::gcd(ll a, ll b) {
    if( !b )
        return a;
    return gcd( b, a % b );
}

void MultiplicativeInverse::initialize() {
    
}

void MultiplicativeInverse::test() {
    initialize();
    int n;
    int mod = 1000003;
    cout << "input a number " ;
    cin >> n;
    cout << n << " * " << modInverse(n, mod) << " % " << mod <<
        " = " << (n * (ll)modInverse(n, mod)) % mod << endl;;
    cout << n << " * " << extendedEuclidean(n, mod) << " % " << mod <<
        " = " << (n * (ll)extendedEuclidean(n, mod)) % mod << endl;
    
    // performance test. extendedEuclidean is faster and extendedEuclid is fastest
    const int MAX = 1000000;
    clock_t start = timeStart();
    for (int i = 1; i < MAX; ++i) {
        modInverse(i, mod);
    }
    timeStop("modInverse", start);
    
    start = timeStart();
    for (int i = 1; i < MAX; ++i) {
        extendedEuclidean(i, mod);
    }
    timeStop("extendedEuclidean", start);
    
    start = timeStart();
    for (int i = 1; i < MAX; ++i) {
        pair<int, pair<int, int> > data = extendedEuclid(i, mod);
        cout << data.first << " " << data.second.first << " " << data.second.second << endl;
    }
    timeStop("extendedEuclid", start);
}
