//
//  LIS.cpp
//  Codebase
//
//  Created by Jitendra S. Kushwaha on 22/07/16.
//  Copyright (c) 2016 Jitendra S. Kushwaha. All rights reserved.
//

#include "LIS.h"
#include <iostream>
#include <algorithm>

vector<int> LIS::getLIS(vector<int> &arr)
{

    vector<int> res;
    vector<int> idx;
    vector<int> pre(arr.size());
    for(unsigned int i = 0; i < arr.size(); ++i)
    {
        unsigned int n = (int)(lower_bound(res.begin(), res.end(), arr[i]) - res.begin());

        if(res.size() <= n)
        {
            res.push_back(arr[i]);
            idx.push_back(i);
        }
        else
        {
            res[n] = arr[i];
            idx[n] = i;
        }

        if(n == 0)
            pre[i] = -1;
        else
            pre[i] = idx[n-1];

        //        for(int i: res) cout << i << " "; cout << endl;
        //        for(int i: pre) cout << i << " "; cout << endl;
    }
    vector<int> rr;
    int st = idx[idx.size()-1];
    while(st != -1)
    {
        rr.push_back(arr[st]);
        st = pre[st];
    }
    reverse(rr.begin(), rr.end());
    return rr;
}

void LIS::initialize() {}

void LIS::test()
{

    int x[] = { 1,4,3,2,1 };
    std::vector<int> v(std::begin(x), std::end(x));

    vector<int> res = getLIS(v);

    cout << "result\n";
    for(int i: res)
        cout << i << " ";
    cout << endl;
}
