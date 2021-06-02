#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


class Solution {
public:
    Solution(vector<int>& nums, int target):m_Nums(nums),m_Target(target)
    {
        if(nums.size() > 10000 || nums.size() < 2)
            return;

        if(target > 1000000000 || target < -1000000000)
            return;

        for(vector<int>::iterator iter=nums.begin(); iter != nums.end(); iter++)
        {
            if(*iter > 1000000000 || *iter < -1000000000)
                return;
        }

        cout << "initializatin vector and target number done" <<endl;

    }


    vector<int> twoSum() {
        vector<int>result;
        vector<int>nums=m_Nums;
        int target = m_Target;

        sort(nums.begin(), nums.end());

        int i,j;
        for(i=0;j=nums.size()-1; i<j )
         {
            if(target == nums[i] + nums[j])
            {
                cout <<nums[i] << "," << nums[j] << endl;
                i++;
                j--;

                result.push_back(i);
                result.push_back(j);

                return result;
            }
            else if(target >  nums[i] + nums[j])
            {
                i++;
            }
            else if(target <  nums[i] + nums[j])
            {
                j--;
            }

         }

        return result;

    }


vector<int> twoSum_method2() {

        vector<int> nums =  m_Nums;
        int target =  m_Target;

        vector<int>result;
        unordered_map<int,int>tore;

        for(int i=0;i<nums.size();i++)
        {
            if(tore.find(target-nums[i])!=tore.end())
            {
                result.push_back(tore[target-nums[i]]);
                result.push_back(i);
                return result;
            }
            tore[nums[i]]=i;
        }
        return result;
    }


private:
    vector<int> m_Nums;
    int m_Target;

};