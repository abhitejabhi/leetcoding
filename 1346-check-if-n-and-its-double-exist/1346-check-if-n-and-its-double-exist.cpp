class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0){
            if(mp.find(arr[i]/2)!=mp.end())
            {
                return true;
            }
            }
            if(mp.find(2*arr[i])!=mp.end())
            {
                return true;
            }
            else
            {
                mp[arr[i]]=1;
            }
        }
        return false;
    }
};