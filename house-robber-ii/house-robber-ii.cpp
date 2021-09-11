class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        return max(rob1(nums, 0, nums.size()-2), rob1(nums, 1, nums.size()-1));
    }
    
    int rob1(vector<int>& a, int l, int h)
    {
        int oneStepBack = 0;
        int twoStepBack = 0;
        int MaxRob = 0;
        for(int i=l;i<=h;++i)
        {
            MaxRob = max(twoStepBack + a[i], oneStepBack);
            twoStepBack = oneStepBack;
            oneStepBack = MaxRob;
        }
        return MaxRob;
    }
};