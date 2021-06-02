#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty()) return false;
        if(nums.size() > 105 || nums.size() < 1)
        {
            cout <<"size if out of bound"<<endl;
            return false;
        }
             
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1;i++)
        {
            if(nums[i] > 1000000000 || nums[i] < -1000000000) return false;

            if(nums[i] == nums[i+1])
                return true;
        }

        return false;
    }

    bool containsDuplicate_method2(vector<int>& nums) {
        unordered_set<int> tmp;

        for(int i=0; i<nums.size();i++)
        {
            tmp.insert(nums.at(i));

            if(tmp.size() != i+1)
                return true;
        }

        return false;

    }



};