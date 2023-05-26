//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        int cnt=0;
        for(int i=5;i<=N;i*=5)
        {
            cnt+=N/i;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends