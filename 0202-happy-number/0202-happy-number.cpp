class Solution {
public:
    bool solve(int n)
    {
        if(n==1)
        {
            return true;
        }
        if(n>1&&n<=4)
        {
            return false;
        }
        int res=0;
        while(n>0)
        {
            int rem=n%10;
            res+=rem*rem;
            n=n/10;
        }
        return solve(res);
    }
    bool isHappy(int n) {
        return solve(n);
    }
};