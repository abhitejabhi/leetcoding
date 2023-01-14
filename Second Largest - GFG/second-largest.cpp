//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	   int largest=0,result=-1;
	   bool flag=false;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>arr[largest])
	        {   flag=true;
	            result=largest;
	            largest=i;
	        }
	        else if(arr[i]!=arr[largest])
	        {
	            if(result==-1||arr[i]>arr[result])
	            {   flag=true;
	                result=i;
	            }
	        }
	    }
	    if(flag==false)
	    {
	        return -1;
	    }
	    else{
	    return arr[result];
	    }
	  
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends