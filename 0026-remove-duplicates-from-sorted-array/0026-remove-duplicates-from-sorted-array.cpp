class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
      set<int>s;
        for(int i=0;i<arr.size();i++)
        {
            s.insert(arr[i]);
        }
        int k=0;
        for(auto it=s.begin();it!=s.end();it++)
        {
            arr[k++]=*it;
        }
        return k;
    }
};