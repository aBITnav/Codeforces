#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i;
long long s=0;
for(i=0;i<n;i++)
s+=(n-i)*i+1;
cout<<s;
return 0;

}