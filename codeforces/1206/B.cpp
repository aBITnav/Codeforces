#include<bits/stdc++.h>
using namespace std;
int64_t n,x,i,s,neg,zero;
int main(){
    for(cin>>n,i=0;i<n;i++)
        cin>>x,s+=x?abs(x)-1:0,neg+=(x<0),zero+=(x==0);
    cout<<s+zero+(neg%2?zero?0:2:0);
return 0;
}