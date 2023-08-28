class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }else if(st.top()==s[i])
            {
                st.pop();
            }else
            {
                st.push(s[i]);
            }
        }
        string temp="";
        while(!st.empty())
        {
            char ch=st.top();
            st.pop();
            temp+=ch;
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};