#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,t,i;
    cin>>t;
    while(t--){
        //vector<int> v;map<int,int> mp;set<int> st;
        cin>>n;
        int a[n],b[n],c[n],sum=0,ans=1e18;
		rep(i,n) cin>>a[i]>>b[i];
        sum=c[0]=max(0ll,a[0]-b[n-1]);
        for (i = 1; i < n; i++)
        	sum+=(c[i]=max(0ll,a[i] - b[i-1]));
        rep(i,n)	ans=min(ans,sum-c[i]+a[i]);
        cout<<ans<<endl;
    }
    return 0;
}


