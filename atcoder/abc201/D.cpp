#include<bits/stdc++.h>
using namespace std;
#define int 		long long
#define pb 			push_back
#define all(a) 		a.begin(),a.end()
#define pii 		pair<int,int>
#define fi 			first
#define se 			second
#define rep(i,k,n) 	for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

int g[2002][2001],dp[2002][2002];

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int m,n;
	char c;
	cin>>m>>n;
	rep(i,0,m) rep(j,0,n) {
		cin>>c;
		if(c=='+') g[i][j]=1;
		else g[i][j]=-1;
	}
	rep(i,m-1,-1) rep(j,n-1,-1){
		if(i==m-1 and j==n-1) dp[i][j]=0;
		else if(i==m-1) dp[i][j]=g[i][j+1]-dp[i][j+1];
		else if(j==n-1) dp[i][j]=g[i+1][j]-dp[i+1][j];
		else dp[i][j]=max(g[i][j+1]-dp[i][j+1],g[i+1][j]-dp[i+1][j]);
	}
	int ans=dp[0][0];
	if(ans>0) cout<<"Takahashi";
	else if(ans==0) cout<<"Draw";
	else cout<<"Aoki";
	return 0;
}