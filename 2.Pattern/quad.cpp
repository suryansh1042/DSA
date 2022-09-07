#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float x1,x2;
    cout<<"enter the quadratic equation in the given form :\n ax2+bx+c=0\n";
    cin>>a>>b>>c;
    x1=float(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=float(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<x1<<x2;
}
