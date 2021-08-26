class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
//         int dp[n+1] = {0};
        
//         dp[0]=0;
//         dp[1] = prices[0];
        int ans = INT_MIN;
        int currmin = prices[0];
        for(int i=0;i<n;++i)
        {
            currmin = min(currmin, prices[i]);
            ans = max(ans, prices[i] - currmin);
        }
        return ans;
    }
};