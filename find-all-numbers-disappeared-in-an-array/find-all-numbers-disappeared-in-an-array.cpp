class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> vect(n+1,0);
        vector<int> ans;
        for(int i=0;i<nums.size();++i)
            ++vect[nums[i]];
        
        for(int i=1;i<vect.size();++i)
        {
            if(vect[i] == 0)
                ans.push_back(i);
        }
        
        return ans;
    }
};