class Solution {
public:
    bool isPalindrome(string s) {
        string newe = "";
        for(int i=0;i<s.length();++i){
            if(isalnum(s[i]))
                newe += tolower(s[i]);
        }
        
        int i=0;
        int j=newe.length()-1;
        
        while(i<j){
            if(newe[i]!=newe[j])
                return false;
            
            ++i;
            --j;
        }
        
        return true;
    }
};