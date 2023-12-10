class Solution {
public:
    int f(int a, int b, int m) {
    long long ans = 1;
    while (b > 0) {
        if (b % 2) {
            ans = (ans * a) % m;  // Update ans and apply modulo operation
            b--;
        } else {
            a = (a * a) % m;  // Update a and apply modulo operation
            b = b / 2;
        }
    }
    return ans;
}

    vector<int> getGoodIndices(vector<vector<int>>& v, int target) {
        int n=v.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int a=v[i][0];
            int b=v[i][1];
            int c=v[i][2];
            int m=v[i][3];
            int val=f(a,b,10);
            if(f(val,c,m)==target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};