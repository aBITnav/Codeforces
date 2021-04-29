#include<bits/stdc++.h>
using namespace std;
#define ll 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int N=5000;
 
ll a[N],b[N],dp[12500000][2],n;
 
ll  solve(int l,int r,int c) {
	if(l>r) return 0;
	if(l==r) return a[l]*b[l];
	int hash=l*n+r-(l*(l+1))/2;
	if(dp[hash][c]!=-1) return dp[hash][c];
	ll ans=0;
	if(c==1) ans=a[l]*b[r]+a[r]*b[l]+solve(l+1,r-1,1);
	else{
		ans=max(ans,a[l]*b[l]+solve(l+1,r,0));
		ans=max(ans,a[r]*b[r]+solve(l,r-1,0));
		ans=max(ans,solve(l,r,1));
	}
	return dp[hash][c]=ans;
}
 
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	memset(dp,-1,sizeof(dp));
	rep(i,0,n) cin>>a[i];
	rep(i,0,n) cin>>b[i];
	cout<<solve(0,n-1,0);
	return 0;
}