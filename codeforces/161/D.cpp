#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
const int M=1e9+7,N=50002;
 
vector<int> g[N];
int dp[N][505],k,ans=0;
 
void dfs(int s,int p){
	dp[s][0]=1;
	for(int i:g[s]) if(i!=p)	{
		dfs(i,s);
		rep(j,0,k)	  ans+=dp[s][j]*dp[i][k-j-1];
		rep(d,1,k+1)  dp[s][d]+=dp[i][d-1]; 
	}
}
 
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x,y;
	cin>>n>>k;
	rep(i,1,n){
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1,0);
	cout<<ans;
	/*rep(i,1,n+1){
		rep(j,0,k+1) cout<<dp[i][j]<<"\t";
		cout<<endl;
	}*/
}