class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int> mp;
        int i = 0, j = 0;
        int sum = 0, ans = 0;
        while (j < nums.size()) {
             mp[nums[j]]++;
            
            while (mp[nums[j]] > 1) {
                ans = max(ans, sum);
                mp[nums[i]]--;
                sum -= nums[i];
                i++;
            }
           if(mp[nums[j]]==1)sum+=nums[j];
            j++;
        }
        return max(ans,sum);
    }
};
