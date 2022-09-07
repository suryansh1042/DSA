#include<iostream>
using namespace std;
int main()
{
    int n,i,f=1;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }

    }
    if(n==1)
        {
            f=0;

        }
    if(f==1)
    {
        cout<<"PRIME NUMBER";
    }
    else
    {
        cout<<"NOT PRIME NUMBER";
    }


}
