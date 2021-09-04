class Solution {
public:
    string reverseWords(string s) {
        string finals = "";
        string temp = "";
        
        for(int i=0;i<s.length();++i){
            if(s[i] == ' '){
                reverseString(temp);
                finals+=temp;
                finals+=" ";
                temp="";
            }else if(i == s.length()-1){
                temp += s[i];
                reverseString(temp);
                finals += temp;
            }else{
                temp+=s[i];
            }
        }
        return finals;
    }
    void reverseString(string& s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            ++i;
            --j;
        }
    }
};