//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
//Input: nums = [5,4,-1,7,8]
//Output: 23
//Input: nums = [1]
//Output: 1
#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        vector<int> arr(nums.size());
        arr[0] = nums[0];
        int ret = nums[0];
        for(int i=1; i< nums.size(); i++)
        {
           
            arr[i] = max(arr[i-1]+nums[i], nums[i]);
            ret = arr[i] > ret ? arr[i] : ret;

        }
        
        return ret;
    }
};