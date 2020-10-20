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

char a[1001][1001];
int m,n,x,y;
vector<int> v;

int dp[1001][1001][2];

int solve(int i,int c,int p) {
	if(i>=n) {
		if(c>=x and c<=y) return 0;
		return 1e9;
	}
	int ans;
	if(dp[i][c][p]!=-1) return dp[i][c][p];
	if(p==0){
		if(c<x) ans= m-v[i]+solve(i+1,c+1,0);
		else if(c>=x and c<=y) 
			ans= min(v[i]+solve(i+1,1,1),m-v[i]+solve(i+1,c+1,0));
		else ans= 1e9;
	}
	else{
		if(c<x) ans=v[i]+solve(i+1,c+1,1);
		else if(c>=x and c<=y) 
			ans= min(m-v[i]+solve(i+1,1,0),v[i]+solve(i+1,c+1,1));
		else ans= 1e9;
	}
	return dp[i][c][p]=ans;
}



signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>m>>n>>x>>y;
	memset(dp,-1,sizeof(dp));
	rep(i,0,m) rep(j,0,n) cin>>a[i][j];
	rep(j,0,n){
		int s=0;
		rep(i,0,m) s+=(a[i][j]=='#');
		v.pb(s);
	}
	//for(int i:v) cout<<i<<" ";
	cout<<min(solve(0,0,0),solve(0,0,1));
}



