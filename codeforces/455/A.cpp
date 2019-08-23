#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,mx=0,ans=0;
	cin>>n;
	long long a[n];
	for(long long i=0;i<n;i++) {
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	long long dp[mx+1]={},f[mx+1]={};
	for(long long i:a) f[i]++;
	dp[1]=f[1];
	for(long long i=2;i<=mx;i++){
		dp[i]=max(dp[i-1],dp[i-2]+i*f[i]);
		ans=max(ans,dp[i]);
	}
	
	cout<<ans;
	
	return 0;
}