//
//  Utils.h
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 03/04/15.
//  Copyright (c) 2015 Jitendra S. Kushwaha. All rights reserved.
//

#ifndef __Codebase__Utils__
#define __Codebase__Utils__

#include <stdio.h>
#include <ctime>
#include <string>

clock_t timeStart();
void timeStop(std::string func, clock_t startTime);

#endif /* defined(__Codebase__Utils__) */
