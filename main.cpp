using namespace std;
#include <iostream>

int main()
{
int a=0, b=1, n, k;

cin>>n;

do{
cout<<b<<endl;
k=b;
b=b+a;
a=k;
}while(b<=n);


return 0;
}
