// { Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        int d,sum,add,y;
    if(n>10)
    {
        while(n>1)
        {
            d=n%10;
            n=n/10;
            sum=sum+d;
        }
         while(sum>1)
        {
            y=sum%10;
            sum=sum/10;
            add=add+y;

        }
        return add;

    }
    else
    {
        return n;
    }


};

// { Driver Code Starts.


int main()
 {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n

	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;


	}
	return 0;
}

