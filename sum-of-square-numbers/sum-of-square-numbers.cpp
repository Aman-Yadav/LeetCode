class Solution {
public:
    bool judgeSquareSum(int n) {
        size_t left = 0;
        size_t right = (size_t)sqrt(n);
        while(left <= right)
        {
            size_t total = left*left + right*right;
            if(total == n)
                return true;
            else if(total > n)
                --right;
            else
                ++left;
        }
        return false;
    }
};