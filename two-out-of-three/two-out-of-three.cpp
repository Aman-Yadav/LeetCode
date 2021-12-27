class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        bool ff[3][101]{};
        vector<int> res;
        
        for(int x:nums1)
            ff[0][x] = true;
        for(int x:nums2)
            ff[1][x] = true;
        for(int x:nums3)
            ff[2][x] = true;
        
        for(int i=1;i<=100;++i)
        {
            if(ff[0][i]+ff[1][i]+ff[2][i] >= 2)
                res.push_back(i);
        }
        
        return res;
    }
};