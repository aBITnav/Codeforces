#include<bits/stdc++.h>
using namespace std;
#define int long long
int m=1e8;
int N1,N2,k1,k2;
int dp[202][3][101][15][15];

int solve(int i,int p,int n1,int c1,int c2){
	if(c1>k1 or c2> k2 or n1>N1 or i-n1>N2) return 0;
	if(i==N1+N2) return 1;
	if(i>201 or n1>100 or c1>10 or c2>10) return 0;
	if(dp[i+1][1][n1+1][c1+1][0]==-1) 
		dp[i+1][1][n1+1][c1+1][0]=solve(i+1,1,n1+1,c1+1,0)%m;
		
	if(dp[i+1][2][n1][0][1]==-1) 
		dp[i+1][2][n1][0][1]=solve(i+1,2,n1,0,1)%m;
		
	if(dp[i+1][1][n1+1][1][0]==-1) 
		dp[i+1][1][n1+1][1][0]=solve(i+1,1,n1+1,1,0)%m;
		
	if(dp[i+1][2][n1][0][c2+1]==-1) 
		dp[i+1][2][n1][0][c2+1]=solve(i+1,2,n1,0,c2+1)%m;
		
	if(p==1)
		return (dp[i+1][1][n1+1][c1+1][0]+dp[i+1][2][n1][0][1])%m;
	return (dp[i+1][1][n1+1][1][0]+dp[i+1][2][n1][0][c2+1])%m;
}

signed main(){
	cin>>N1>>N2>>k1>>k2;
	memset(dp,-1,sizeof(dp));
	int ans=solve(1,1,1,1,0)+solve(1,2,0,0,1);
	cout<<ans%m;
}


