class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
       int n=hand.size();
        map<int,int>mp;
        for(auto it:hand)
        {
            mp[it]++;
        }
        while(!mp.empty())
        {
            auto it=mp.begin();
            int val=it->first;
            for(int i=0;i<groupSize;i++)
            {
                if(mp.count(val+i))
                {
                    mp[val+i]--;
                    if(mp[val+i]==0)
                    {
                        mp.erase(val+i);
                    }
                }else
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};