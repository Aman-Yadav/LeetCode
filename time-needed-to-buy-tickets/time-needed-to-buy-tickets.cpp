class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int ans=0;
        while(true)
        {
            for(int i=0;i<tickets.size();++i){
                if(tickets[k] == 0)
                    return ans;
                else if(tickets[i] == 0)
                    continue;
                else{
                    --tickets[i];
                    ++ans;
                }
                    
            }
        }
        
        return ans;
    }
};