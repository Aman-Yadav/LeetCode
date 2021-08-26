class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int maxi = INT_MIN;
        
        for(int x:nums1) maxi = max(maxi,x);
        for(int x:nums2) maxi = max(maxi,x);
        
        vector<int> freq1(maxi+1,0);
        vector<int> freq2(maxi+1,0);
        for(int x:nums1) ++freq1[x];
        for(int x:nums2) ++freq2[x];
        
        vector<int> ans;
        for(int i=0;i<freq1.size();++i)
        {
            for(int j=1;j<=min(freq1[i],freq2[i]);++j)
                ans.push_back(i);
        }
        
        return ans;
    }
};