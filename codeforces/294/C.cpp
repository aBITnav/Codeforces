#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m=1e9+7;
ll mm(ll a,ll b){
    a%=m,b%=m;
    return (a*b)%m;
}
ll p(ll x,ll y){
    if(!y) return 1;
    ll t=p(x,y/2)%m;
    if(y%2) return mm(t,mm(t,x));
    return mm(t,t);
}

ll mi(ll x){
    x%=m;
    return p(x,m-2)%m; 
}

int main(){
    int A,n;
    cin>>A>>n;
    int B[n];
    for(int i=0;i<n;i++) cin>>B[i];
    sort(B,B+n);
    ll ans=1,d=1,f[A+2],c=0,aa;
    f[0]=1;
    for(int i=1;i<=A;i++) f[i]=mm(f[i-1],i);
    for(int i=0;i<n-1;i++){
        int z=B[i+1]-B[i]-1;
        c+=z;
        if(z>0) ans=mm(ans,p(2,z-1)),d=mm(d,mi(f[z]));
    }
    c+=(B[0]-1+A-B[n-1]);
    d=mm(d,mm(f[c],mm(mi(f[B[0]-1]),mi(f[A-B[n-1]]))));
    cout<<mm(ans,d);
    return 0;
}
