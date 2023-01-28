class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int x=0;
      for(int i=0;i<n;i++)
      {  int j=0;
         if(operations[i][j]=='+'||operations[i][j+1]=='+'||operations[i][j+2]=='+')
         {
             x++;
         }
       else if(operations[i][j]=='-'||operations[i][j+1]=='-'||operations[i][j+2]=='-')
       {
           x--;
       }    
      }
        return x;
    }
};