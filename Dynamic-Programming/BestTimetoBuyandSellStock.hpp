// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// Example 2:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

// Constraints:
// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory> //for unique_ptr

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();

        //state equation:
        //Pro(n) = maximum profit from prices[0] to prices[n - 1]
        //Pro(n) = max(Pro(n - 1), prices[n - 1] - minimum price from prices[0] to prices[n - 2])
        //unique_ptr<int[]> pro(new int[n]);
        //int* pro = new int[n];
        //vector<int> Pro(n,0);
		int maxPro = 0;
		int minPrice = INT_MAX;
		for (int i = 0; i < prices.size(); i++) {
			minPrice = min(minPrice, prices[i]);
			maxPro = max(maxPro, prices[i] - minPrice);
		}
		return maxPro;

    }
};