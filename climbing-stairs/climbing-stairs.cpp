class Solution {
public:
    int climbStairs(int n) {
        // we will do this using dp array
        if(n<3) return n;
        // int dp[n+1];
        // dp[0] = 0;
        // dp[1] = 1;
        // dp[2] = 2;
        // for(int i=3;i<=n;++i)
        // {
        //     dp[i] = dp[i-1]+dp[i-2];
        // }
        // return dp[n];
        
        //improving the space complexity
        int prev = 2;
        int prevprev = 1;
        int curr = prev + prevprev;
        for(int i=curr;i<=n;++i)
        {
            curr = prev + prevprev;
            prevprev = prev;
            prev = curr;
        }
        return curr;
    }
};



