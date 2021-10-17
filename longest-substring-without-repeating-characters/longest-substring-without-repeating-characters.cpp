class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int i=0;
        int j=0;
        int maxi = 0;
        while(j<s.length())
        {
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                ++j;
                maxi = max(maxi, (int)st.size());
            }
            else{
                st.erase(st.find(s[i]));
                ++i;
                //maxi = 0;
            }
        }
        return maxi;
    }
};