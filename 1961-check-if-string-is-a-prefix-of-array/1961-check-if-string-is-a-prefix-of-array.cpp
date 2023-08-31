class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string temp="";
        for(auto it:words)
        {
            temp+=it;
            if(temp==s)
            {
                return true;
            }
        }
        return false;
    }
};