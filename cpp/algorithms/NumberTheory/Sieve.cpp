//
//  Sieve.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 03/04/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#include "Sieve.h"
#include "../Utils.h"
#include <cmath>
#include <iostream>

using namespace std;

//-----------------------------------------------------------------
const int MAX = 100000010;
bool primes[MAX];
//bitset<MAX> primes;

void Sieve::sieveEratosthene(int N) {
    // To keep it fast, consider only odd numbers
    primes[0] = true;
    primes[1] = true;
    int limit = (int)sqrt(N);
    for(int i = 3; i <= limit; i += 2)
        if(!primes[i])
            for(int j = i*i, k = i<<1; j < N; j += k)
                primes[j] = true;
}
//-----------------------------------------------------------------

int prime[MAX >> 6];
inline bool check(int i) {
    return ( prime[i >> 5] & ( 1 << ( i & 31) ) );
}
inline void fix(int i) {
    prime[ i >> 5] |= ( 1 << ( i & 31) );
}
void Sieve::sieveAtkinLessSpace(int N) {
    int limit = (int)sqrt(N);
    for(int i = 6; i <= limit; i += 6) {
        for(int k = i - 1; k <= i + 1; k += 2)
            if(!check(k >> 1))
                for(int j = k * k; j < N; j += k << 1)
                    fix( j >> 1);
    }
}


//-----------------------------------------------------------------

bool isComposite[MAX];
void Sieve::sieveAtkin(int N) {
    int limit = (int)sqrt(N);
    for(int i = 6; i <= limit; i += 6) {
        for(int k = i - 1; k <= i + 1; k += 2)
            if(!isComposite[k])
                for(int j = k * k; j < N; j += k << 1)
                    isComposite[j] = true;
    }
}
//-----------------------------------------------------------------

void Sieve::initialize() {
    
}

void Sieve::test() {
    initialize();
    clock_t startTime = timeStart();
    sieveEratosthene(MAX);
    timeStop("sieveEratosthene", startTime);
    
    startTime = timeStart();
    int cnt = 1; // i cnt for 2
    for (int i = 3; i < MAX; i += 2) {
        if(primes[i] == false)
            ++cnt;
    }
    cout << cnt << endl;
    timeStop("sieveEratosthene prime count", startTime);
   
    startTime = timeStart();
    sieveAtkinLessSpace(MAX);
    timeStop("sieveAtkinLessSpace", startTime);
    
    startTime = timeStart();
    cnt = 2; // i cnt for 2 and 3
    for(int i = 6; i < MAX ;  i += 6)
        for(int j = i - 1; j <= i + 1; j += 2)
            if(!check(j >> 1))
                ++cnt;
    cout << cnt << endl;
    timeStop("sieveAtkinLessSpace prime count", startTime);
    
    startTime = timeStart();
    sieveAtkin(MAX);
    timeStop("sieveAtkin", startTime);
    
    startTime = timeStart();
    cnt = 2; // i cnt for 2 and 3
    for(int i = 6; i < MAX ;  i += 6)
        for(int j = i - 1; j <= i + 1; j += 2)
            if(!isComposite[j] )
                ++cnt;
    cout << cnt << endl;
    timeStop("sieveAtkin prime count", startTime);
}