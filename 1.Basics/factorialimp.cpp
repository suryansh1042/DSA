// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    long long int factorial(int N)
    {
       long long int ans=1;
       int i=1;
        while(i<=N)
        {
            ans=ans*i;
            i++;
        }

        return ans;
    }
    };

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
