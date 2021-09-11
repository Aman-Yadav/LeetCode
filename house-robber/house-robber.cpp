class Solution {
public:
    int rob(vector<int>& nums) {
        int oneStepBack = 0;
        int twoStepBack = 0;
        int MaxRob = 0;
        for(int i=0;i<nums.size();++i)
        {
            MaxRob = max(twoStepBack + nums[i], oneStepBack);
            twoStepBack = oneStepBack;
            oneStepBack = MaxRob;
        }
        return MaxRob;
    }
};