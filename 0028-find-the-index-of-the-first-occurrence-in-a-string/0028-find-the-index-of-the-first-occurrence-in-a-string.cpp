class Solution {
public:
    int strStr(string s1, string s2) {
        int i=0,j=0;
        int n=s1.size();
        int m=s2.size();
      for(i=0;i<=n-m;i++)
      {
          for( j=0;j<m;j++)
          {
              if(s1[i+j]!=s2[j])
              {
                  break;
              }
              if(j==m-1)
              {
                  return i;
              }
          }
      }
        return -1;
    }
};