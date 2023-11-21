// 121. Best Time to Buy and Sell Stock
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int smallest = 10000;
        int largest_profit = 0;
        int current_profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < smallest){
                smallest = prices[i];
            }
            current_profit = prices[i] - smallest;
            if (current_profit > largest_profit) {
                largest_profit = current_profit;
            }
        }
        return largest_profit;
    }
};