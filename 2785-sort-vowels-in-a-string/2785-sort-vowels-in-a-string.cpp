class Solution {
public:
    bool h(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(h(s[i]))
            {
                temp+=s[i];
            }
        }
        int  k=0;
        cout<<temp<<endl;
        sort(temp.begin(),temp.end());
        cout<<temp<<endl;
        for(int i=0;i<s.size();i++)
        {
            if(h(s[i]))
            {
                s[i]=temp[k++];
            }
        }
        return s;
    }
};