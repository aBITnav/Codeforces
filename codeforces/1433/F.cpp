#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define clr(x) memset(x, 0, sizeof(x))
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
int M=1e9+7,N=205001;

int mm(int x,int y){x%=M,y%=M;return (x*y)%M;}//Modular Multiply
int po(int x,int y){ if(!y)return 1;int a=po(x,y/2)%M;if(y%2)return mm(a,mm(a,x));return mm(a,a);}//(x**y)%M

int a[80][80],m,n,k;

int dp[70][70][70][70];
int solve(int i,int j,int c,int r) {
	if(i>=m or j>=n or c>=n/2){
		if(r==0) return 0;
		return -1e9;
	}
	if(dp[i][j][c][r]!=-1) return dp[i][j][c][r];
	int ans=max(solve(i+1,0,0,r),solve(i,j+1,c,r));
	ans=max(ans,a[i][j]+solve(i+1,0,0,(r+a[i][j])%k));
	//if(c<n/2) 
		ans=max(ans,a[i][j]+solve(i,j+1,c+1,(r+a[i][j])%k));
	return dp[i][j][c][r]=ans;
}



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>m>>n>>k;
	memset(dp,-1,sizeof(dp));
	rep(i,0,m) rep(j,0,n) cin>>a[i][j];
	cout<<solve(0,0,0,0);
}



