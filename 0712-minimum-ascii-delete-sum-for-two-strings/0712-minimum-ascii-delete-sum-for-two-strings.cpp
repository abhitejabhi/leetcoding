class Solution {
public:
    int f(int i,int j,string &s1, string &s2,vector<vector<int>>&dp){
        int n1 = s1.size(),n2 = s2.size(),sum = 0;
        if(i == n1 and j == n2){
            return 0;
        }
        else if(i == n1){
            for(int k = j;k<n2;k++){
                sum+=s2[k];
            }
            return sum;
        }
        else if(j == n2){
            for(int k = i;k<n1;k++){
                sum+=s1[k];
            }
            return sum;
        }
        else if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        else if(s1[i] == s2[j]){
            return  dp[i][j]=f(i+1,j+1,s1,s2,dp);
            
        }
        else{
           int t2 = s1[i] + f(i+1,j,s1,s2,dp);
           int t3 = s2[j] + f(i,j+1,s1,s2,dp);
            return dp[i][j]= min(t2,t3);
        }
        
        
    }
    int minimumDeleteSum(string s1, string s2) {
        int n1 = s1.size(),n2 = s2.size();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
        return f(0,0,s1,s2,dp);
    }
};