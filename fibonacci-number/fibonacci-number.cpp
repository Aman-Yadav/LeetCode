class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;
        int pre = 0;
        int prev = 1;
        int curr = prev + pre;
        int i=2;
        while(i<=n)
        {
            curr = prev + pre;
            pre = prev;
            prev = curr;
            ++i;
        }
        
        return curr;
    }
};