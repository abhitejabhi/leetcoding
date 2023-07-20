class Solution {
public:
    int m,n;
    bool f(int i,int j,vector<vector<char>>& board,int ind ,string word)
    {
        if(ind==word.size())
        {
            return true;
        }
        if(i<0||j<0||i>=m||j>=n||board[i][j]=='$')
        {
            return false;
        }
        if(board[i][j]!=word[ind])
        {
            return false;
        }
        char temp=board[i][j];
        board[i][j]='$';
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
    for (int k = 0; k < 4; k++) {
        int nrow = i + drow[k];
        int ncol = j + dcol[k];
        if (f(nrow, ncol, board, ind + 1, word)) {
            return true;
        }
    }
        board[i][j]=temp;
            return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
         m=board.size();
         n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0]&&f(i,j,board,0,word))
                   {
                       return true;
                   }
            }
        }
                   return false;
    }
};