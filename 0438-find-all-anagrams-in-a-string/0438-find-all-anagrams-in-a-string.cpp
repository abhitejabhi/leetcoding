class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>hash(26,0);
        vector<int>temp(26,0);
        vector<int>ans;
        for(int i=0;i<p.size();i++)
        {
            hash[p[i]-'a']++;
        }
        int i=0,j=0;
        int k=p.size();
        while(j<s.size())
        {  
           temp[s[j]-'a']++;
           while(j-i+1>k)
           {
               temp[s[i]-'a']--;
               i++;
           }
            if(temp==hash)
            {
                ans.push_back(i);
            }
            j++;
        }
        return ans;
    }
};