class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ans = s;
        s.clear();
        for(int i=ans.size()-1;i>=0;--i)
            s.push_back(ans[i]);
    }
};