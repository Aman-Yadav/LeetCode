class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int ans = -1;
        for(int i=nums.size()-1;i>=0;--i){
            if(i%10 == nums[i])
                ans = i;
        }
        
        return ans;
    }
};