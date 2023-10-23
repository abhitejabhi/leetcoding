class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n=list1.size();
        int m=list2.size();
        vector<string>ans;
        int mini=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            string temp=list1[i];
            for(int j=0;j<m;j++)
            {
                if(temp==list2[j])
                {
                    if(flag==false)
                    {
                         mini=i+j;
                        ans.push_back(temp);
                        flag=true;
                    }else
                    {
                        int prev=i+j;
                        if(prev<mini)
                        {
                            ans.clear();
                            ans.push_back(temp);
                        }else if(prev==mini)
                        {
                            ans.push_back(temp);
                        }
                    }
                    
                    
                }
            }
        }
        return ans;
    }
};