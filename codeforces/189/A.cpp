#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	map<int,int>dp;
	dp[a]=dp[b]=dp[c]=1;
	for(int i=0;i<=n;i++){
		int p=(max(dp[i-a],max(dp[i-b],dp[i-c])));
		if(p!=0) dp[i]=1+p;
	}
	cout<<dp[n];
	return 0;
}