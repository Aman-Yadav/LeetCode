class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size()-1;
        for(int i=0;i<matrix.size();++i)
        {
            if(target > matrix[i][n])
                continue;
            else
            {
                int x = 0;
                int y = n;
                while(x <= y)
                {
                    int mid = (x+y)/2;
                    if(matrix[i][mid] == target)
                        return true;
                    else if(matrix[i][mid] > target){
                        y = mid - 1;
                    }
                    else{
                        x = mid + 1;
                    }
                }
            }
        }
        
        return false;
    }
};