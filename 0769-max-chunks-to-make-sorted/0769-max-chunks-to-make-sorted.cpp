class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int cnt=0;
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            maxi=max(maxi,arr[i]);
            if(i==maxi)
            {
                cnt++;
            }
        }
        return cnt;
    }
};