#include<iostream>
using namespace std;
int main()
{
int f,N;
cin>>N;
 if((N%100)==0)
 {
     if((N%400)==0)
     {
         f=1;
     }
     else
     {
         f=0;
     }
 }
 else
 {
     if((N%4)==0)
     {
         f=1;
     }
     else
     {
         f=0;
     }
 }
   cout<<f<<endl;
}
