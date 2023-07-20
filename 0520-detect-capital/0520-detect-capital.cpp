class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>=65&&word[i]<=90)
            {
                cnt++;
            }
        }
        if(cnt==word.size())
        {
            return true;
        }
        if(cnt==0)
        {
            cout<<cnt<<endl;
            return true;
        }
        if(cnt==1)
        {
            if(word[0]>=65&&word[0]<=90)
            {
                return true;
            }
            
        }
        //cout<<cnt<<endl;
        return false;
    }
};