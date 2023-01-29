class Solution {
public:
    int alternateDigitSum(int n) {
        int temp=n;
        int reverse=0;
        while(temp!=0)
        {
            int last_digit=temp%10;
            reverse=reverse*10+last_digit;
            temp=temp/10;
        }
        int count=0,ans=0;
        while(reverse!=0)
        {
            int last_digit=reverse%10;
            if(count%2==0)
            {
                ans+=last_digit;
            }else
            {
                ans-=last_digit;
            }
            count++;
            reverse=reverse/10;
        }
        return ans;
        
    }
};