#pragma once
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //method 1  Bit Manipulation 
        int i, size = nums.size();
        int bit = size;
        for(i = 0; i < size; i++) 
        {
            bit ^= nums[i] ^ i;
        }
        
        return bit;
    }

    int missingNumber_2(vector<int>& nums) {

        //method 2  sort 
        sort(nums.begin(), nums.end()); //O(nlgn)

        int i, size = nums.size();

        for(i = 0; i < size; i++) 
        {
           if(nums[i] != i)
           return i;

        }
        return size; 
    }


};