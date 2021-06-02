
#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> result;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != nums[nums[i]-1] )
            {
                swap(nums[i], nums[nums[i]-1]);
                --i;
            }
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != i+1)
                result.push_back(i+1);
        }

        return result;     
    }


    vector<int> findDisappearedNumbers_2(vector<int>& nums) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++)
        {           
            int index = abs(nums[i])-1;
            nums[index] = nums[index] >0 ? (-nums[index]) : nums[index];

        }
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] > 0)
                result.push_back(i+1);
        }

         return result;   
    }


      vector<int> findDisappearedNumbers_2(vector<int>& nums) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++)
        {           
            int index = abs(nums[i])-1;
            nums[index] = nums[index] >0 ? (-nums[index]) : nums[index];

        }
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] > 0)
                result.push_back(i+1);
        }

         return result;   
    }  


      vector<int> findDisappearedNumbers_3(vector<int>& nums) {
        vector<int> result;

        int n = nums.size();
        for(int i=0; i<nums.size(); i++)
        {           
            int index = nums[i]-1;
            nums[index % n] += n;

        }
        for(int i=0; i<n; i++)
        {
            if(nums[i] <= n)
                result.push_back(i+1);
        }

         return result;   
    } 



            
};