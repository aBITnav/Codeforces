#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n,s;
	cin>>n>>s;
	int w[n+1],v[n+1];
	for(int i=1;i<=n;i++) cin>>w[i]>>v[i];
	int dp[n+1][s+1];
	for(int i=0;i<=n;i++)
		for(int j=0;j<=s;j++)
			if(i==0 or j==0) dp[i][j]=0;
			else if(j>=w[i])
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			else dp[i][j]=dp[i-1][j];
	cout<<dp[n][s];	
	return 0;
}