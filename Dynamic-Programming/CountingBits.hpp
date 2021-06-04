#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret;
        for(int i=0; i<n+1;i++)
        {
            ret.push_back(CountOne(i));
        }

        return ret;
    }

    int CountOne(int num)
    {
        int count=0;
        for(count=0; count; count++)
        {
            num = num & (num-1);
        }
        return count;
    }

};