#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        for(j=1;j<=i-1;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}
