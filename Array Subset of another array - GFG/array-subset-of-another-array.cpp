//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    map<int,int>mp;
    for(int it=0;it<m;it++)
    {
        mp[a2[it]]++;
    }
    for(int it=0;it<n;it++)
    {
        mp[a1[it]]--;
    }
    for(auto it:mp)
    {
        if(it.second>0)
        {
            return "No";
        }
    }
    return "Yes";
}