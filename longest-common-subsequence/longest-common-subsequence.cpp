class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        int n = a.length();
    int m = b.length();

    int arr[n+1][m+1];
    for(int i=0;i<=n;++i){
        for(int j=0;j<=m;++j)
            arr[i][j] = 0;
    }

    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            if(a[i-1] == b[j-1])
            arr[i][j] = 1 + arr[i-1][j-1];
            else
            arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
        }
    }

    return arr[n][m];
    }
};