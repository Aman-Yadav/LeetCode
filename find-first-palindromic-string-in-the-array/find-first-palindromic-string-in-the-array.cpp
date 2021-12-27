class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(string x: words)
            if(ispalindrome(x))
                return x;
        
        return "";
    }
    
    bool ispalindrome(string word){
        int i=0;
        int j=word.length()-1;
        
        while(i<j)
        {
            if(word[i]!=word[j])
                return false;
            
            ++i;
            --j;
        }
        
        return true;
        
    }
};