// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices){
        int n = prices.size();
        int maxProfit = 0; 
        int bestbuy = prices[0];
        for (int i = 1; i < n; i++){         
            if (prices[i] - bestbuy > maxProfit){         
                maxProfit = prices[i] - bestbuy;          
            }
            bestbuy =min( bestbuy, prices[i]);
        }
        return maxProfit;        
    }
};
