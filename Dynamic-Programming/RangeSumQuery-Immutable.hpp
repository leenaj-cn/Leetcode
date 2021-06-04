#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class NumArray {
public:
    NumArray(vector<int>& nums) {
        
        sum.push_back(nums[0]);
        
        for(int i=1; i< nums.size(); i++)
        {
            int a= sum[i-1] + nums[i];
            sum.push_back(a);
        }
    }
    
    int sumRange(int left, int right) {
        int ret = left == 0? sum[right] : sum[right] - sum[left-1];
        return ret;
    }

private:
    vector<int>sum;

};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */