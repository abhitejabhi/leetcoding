class Solution {
public:
    string thousandSeparator(int n) {
        string temp;
        int cnt=0;
        if(n==0)return "0";
        while(n>0)
        {
            int rem=n%10;
            char ch=rem+'0';
            cout<<ch<<endl;
            temp.push_back(ch);
            cnt++;
            n=n/10;
            if(cnt==3&&n>0)
            {
                temp.push_back('.');
                cnt=0;
            }
        }
         reverse(temp.begin(),temp.end());
        return temp;
    }
};