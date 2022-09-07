#include<iostream>
using namespace std;
int main()
{
    int a=INT_MAX;
    a++;
    //it will give the minimum value that an integer stores;
    //same with character its range is -128to127
    //but after the increase it gives us the minimum value;
    char c=127;
    c++;
    cout<<a<<"  "<<int(c);
}
