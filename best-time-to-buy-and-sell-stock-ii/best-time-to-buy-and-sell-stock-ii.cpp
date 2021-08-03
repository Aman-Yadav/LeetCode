class Solution {
public:
    int maxProfit(vector<int>& nums) {
        // notes included
        int profit = 0;
        for(int i=0;i<nums.size()-1;++i){
            profit += (nums[i+1] > nums[i])?nums[i+1]-nums[i]:0;
        }
        return profit;
    }
};
