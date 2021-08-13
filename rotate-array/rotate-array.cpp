class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // this is the brute force solution
        // while(k--){
        //     int last = nums[nums.size()-1];
        //     for(int i=nums.size()-1;i>0;--i){
        //         nums[i] = nums[i-1];
        //     }
        //     nums[0]=last;
        // }
        k = k%nums.size();
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size()-1);
    }
    
    void reverse(vector<int>& nums, int start, int end){
        while(start < end){
            int remp = nums[start];
            nums[start] = nums[end];
            nums[end] = remp;
            ++start;
            --end;
        }
    }
};