int expand(string s,int l, int h){
        while(l>=0 && h <s.length() && s[l]==s[h]){
                l--;
                h++;
            }
        return h-l-1;
    }
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<1){
            return "";
        }
        int l=0,h=0;
        int l1,l2,maxlen;
        for(int i=0;i<s.length();i++){
            l1= expand(s,i,i);
            l2= expand(s,i,i+1);
            maxlen = max(l1,l2);
            if(maxlen > h-l){
                l = i - ((maxlen-1)/2);
                h= i + (maxlen/2);
            }
        }
        return s.substr(l,h-l+1);
    }
};