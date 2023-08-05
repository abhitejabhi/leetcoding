class Solution {
public:
    static char helper(vector<int>freq)
    {
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]!=0)
            {
                return (char)i+'a';
            }
        }
        return 'a';
    }
    string robotWithString(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        string ans="";
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
            freq[s[i]-'a']--;
            while(st.size()>0 && st.top()<=helper(freq))
            {
                char ch=st.top();
                st.pop();
                ans.push_back(ch);
            }
        }
        while(!st.empty())
        {
           char ch=st.top();
                st.pop();
                ans.push_back(ch);
        }
        return ans;
    }
};