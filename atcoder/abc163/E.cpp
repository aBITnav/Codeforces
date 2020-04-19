//Author: Abitnav
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
vector<pair<int,int> > v;
int dp[2001][2001];


int solve(int i,int l){
	if(i==v.size()) return 0;
	int r=l+v.size()-i-1,a,b;
	if(dp[i+1][l+1]==-1) dp[i+1][l+1]=solve(i+1,l+1);
	if(dp[i+1][l]==-1)	dp[i+1][l]=solve(i+1,l);
	a=v[i].fi*abs(v[i].se-l)+dp[i+1][l+1];
	b=v[i].fi*abs(v[i].se-r)+dp[i+1][l];
	return max(a,b);	
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	memset(dp,-1,sizeof(dp));	
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		v.pb({x,i});
	}
	sort(all(v));
	reverse(all(v));
	cout<<solve(0,0);
		
	return 0;
}











