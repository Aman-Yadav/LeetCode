class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        
        for(int i=0;i<n;++i)
        {
                nums[abs(nums[i]) - 1] *= -1;
                if(nums[abs(nums[i])-1] > 0) ans.push_back(abs(nums [i]));
        }
        
        // for(int i=0;i<n;++i)
        //     if(nums[i] > 0)
        //         ans.push_back(i+1);
        return ans;
    }
};