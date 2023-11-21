class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        string temp1=s1,temp2=s2;
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        cout<<temp2<<endl;
        bool flag1=true,flag2=true;
        for(int i=0;i<temp2.size();i++)
        {
            if(temp2[i]<temp1[i])
            {
                flag1=false;
            }
        }
       
        for(int i=0;i<temp1.size();i++)
        {
            if(temp1[i]<temp2[i])
            {
                flag2=false;
            }
        }
        return flag1||flag2;
    }
};