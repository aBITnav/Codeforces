#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int a[n],dp[n]={};
	for(int i=0;i<n;i++) cin>>a[i];
	dp[n-2]=abs(a[n-1]-a[n-2]);
	for(int i=n-3;i>=0;i--){
		dp[i]=dp[i+1]+abs(a[i+1]-a[i]);
		for(int j=2;j<=k;j++)
			if(i+j+1>n) break;
			else dp[i]=min(dp[i+j]+abs(a[i+j]-a[i]),dp[i]);
	}
	cout<<dp[0];
	return 0;
}