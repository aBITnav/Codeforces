#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
int M=1e9+7;
int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k,x,ans,mx=0,d,s;
	cin>>n>>k;
	int a[2*n+1]={},ps[2*n+1]={},dp[2*n+1]={};
	for(int i=1;i<=n;i++){
		cin>>x;
		a[i]=a[i+n]=x;
	}
	for(int i=1;i<=2*n;i++){
		ps[i]=ps[i-1]+a[i];
		dp[i]=dp[i-1]+(a[i]*(a[i]+1))/2;
		//cout<<a[i]<<" "<<ps[i]<<" "<<dp[i]<<endl;
	}
	for(int i=n+1;i<=2*n;i++){
		
		s=upper_bound(ps,ps+2*n+1,ps[i]-k)-ps-1;
		d=ps[i]-k-ps[s];
		ans=dp[i]-dp[s]-(d*(d+1))/2;
		
		mx=max(mx,ans);
	}
	cout<<mx<<endl;
}


