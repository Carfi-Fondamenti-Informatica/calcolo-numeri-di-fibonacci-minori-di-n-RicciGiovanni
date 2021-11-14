#include <iostream>

using namespace std;

int main()
{
    int n=0,i=0,b=1,a=0,c=0;
    cin>>n;
    cout<<b<<endl;
     for(i=0;i<n;i++)
        {
         
         c=a+b;
         cout<<c<<endl;
         a=b;
         b=c;
        }
         
    return 0;
}
