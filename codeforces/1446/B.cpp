#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

int m,n,c=0,dp[5001][5001];
string s,t;

int solve(int i,int j){
	if(i==m or j==n) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	int ans=0;
	ans=max({ans,solve(i+1,j)-1,solve(i,j+1)-1});
	if(s[i]==t[j]) ans=max(ans,2+solve(i+1,j+1));
	c=max(c,ans);
	return dp[i][j]=ans;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>m>>n>>s>>t;
	memset(dp,-1,sizeof(dp));
	solve(0,0);
	cout<<c;
}




