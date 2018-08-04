//
//  Sieve.h
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 03/04/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#ifndef __Codebase__Sieve__
#define __Codebase__Sieve__

#include <stdio.h>
#include "../Algorithm.h"

class Sieve: public Algorithm {
public:
    void sieveEratosthene(int N);
    void sieveAtkin(int N);
    void sieveAtkinLessSpace(int N);
    virtual void initialize();
    virtual void test();
};

#endif /* defined(__Codebase__Sieve__) */