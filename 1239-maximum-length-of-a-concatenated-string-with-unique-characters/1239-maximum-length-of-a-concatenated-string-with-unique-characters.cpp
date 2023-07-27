class Solution {
public:
    bool helper(string &s1,string &s2)
    {
        vector<int>ans(27,0);
        for(char &ch:s1)
        {
            if(ans[ch-'a']>0)return true;
            
            ans[ch-'a']++;
        }
        for(char ch:s2)
        {
            if(ans[ch-'a']>0)return true;
        }
        return false;
    }
    int f(int i,vector<string>&arr,string temp,int n)
    {
        if(i>=n)
        {
            return temp.length();
        }
        int pick=0;
        int notpick=0;
        if(helper(arr[i],temp))
        {
            notpick=f(i+1,arr,temp,n);
        }else
        {
            pick=f(i+1,arr,temp+arr[i],n);
            notpick=f(i+1,arr,temp,n);
        }
        return max(pick,notpick);
    }
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        int i=0;
        string temp="";
        return f(i,arr,temp,n);
    }
};