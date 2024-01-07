class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        for(int i=1;i<=encoded.size();i++)
        {
           int val=ans[i-1]^encoded[i-1];
            ans.push_back(val);
        }
        return ans;
    }   
};