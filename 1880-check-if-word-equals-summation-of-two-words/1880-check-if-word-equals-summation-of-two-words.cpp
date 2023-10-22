class Solution {
public:
    int f(string s)
    {
        string temp;
        int val=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==0&&s[i]=='a')continue;
             int temp=(s[i]-'a');
            val=val*10+temp;
        }
        
        //int val=stoi(temp);
        return val;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int firstval=f(firstWord);
        int secondval=f(secondWord);
        int targetval=f(targetWord);
        return (firstval+secondval==targetval);
    }
};