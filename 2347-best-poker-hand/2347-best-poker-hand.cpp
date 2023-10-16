class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<int,int>ran;
        map<char,int>su;
        int n=ranks.size();
        for(int i=0;i<ranks.size();i++)
        {
            ran[ranks[i]]++;
            su[suits[i]]++;
        }
        if(su[suits[0]]==n)
        {
            return "Flush";
        }
        for(int i=0;i<n;i++)
        {
            if(ran[ranks[i]]>=3)
            {
                return "Three of a Kind";
            }
        }
         for(int i=0;i<n;i++)
        {
            if(ran[ranks[i]]==2)
            {
                return "Pair";
            }
        }
        return "High Card";
    }
};