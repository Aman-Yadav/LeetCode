class Solution {
public:
    vector<string> mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0)
            return ans;
        string combinations = "";
        helper(digits, 0, combinations);
        return ans;
    }
    
    void helper(string &digits, int i, string &combi)
    {
        if(i == digits.size()){
            ans.push_back(combi);
            return;
        }
            
        
        for(auto &c:mapping[digits[i] - '0'])
        {
            combi.push_back(c);
            helper(digits, i+1, combi);
            combi.pop_back();
        }
    }
};

// string also support push_back and pop_back --> remember this