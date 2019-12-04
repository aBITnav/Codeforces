#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int h,w,m=1e9+7;
	cin>>h>>w;
	char g[h+1][w+1];
	int dp[h+1][w+1];
	for(int i=1;i<=h;i++) for(int j=1;j<=w;j++) cin>>g[i][j];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++){
			if(g[i][j]=='#') continue;;;;;
			if(i==1 and j==1) dp[i][j]=1;
			else dp[i][j]=(dp[i-1][j]+dp[i][j-1])%m;
		}
	cout<<dp[h][w];
	
}