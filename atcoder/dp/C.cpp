#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[3][n],dp[3][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<3;j++)
			cin>>a[j][i];
	for(int i=0;i<3;i++) dp[i][n-1]=a[i][n-1];
	
	for(int i=n-2;i>=0;i--){
		dp[0][i]=max(dp[1][i+1],dp[2][i+1])+a[0][i];
		dp[1][i]=max(dp[0][i+1],dp[2][i+1])+a[1][i];
		dp[2][i]=max(dp[0][i+1],dp[1][i+1])+a[2][i];
	}
	cout<<max(dp[0][0],max(dp[1][0],dp[2][0]));
	
	return 0;
}