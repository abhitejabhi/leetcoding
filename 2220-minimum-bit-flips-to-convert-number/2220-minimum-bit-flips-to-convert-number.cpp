class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        for(int i=0;i<32;i++)
        {
            int val1=(start&(1<<i));
            int val2=(goal&(1<<i));
            if(val1!=val2)
            {
                cnt++;
            }
        }
        return cnt;
    }
};