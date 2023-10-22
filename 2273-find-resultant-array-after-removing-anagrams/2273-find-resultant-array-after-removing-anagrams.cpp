class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>ans;
        string s1=words[0];
         ans.push_back(s1);
        sort(s1.begin(),s1.end());
        for(int i=1;i<n;i++)
        {
            string s2=words[i];
            sort(s2.begin(),s2.end());
            if(s1==s2){continue;}
            else
            {
                ans.push_back(words[i]);
                s1=s2;
            }
            
        }
        return ans;
       
    }
};