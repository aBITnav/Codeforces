#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define N 200010
vector<int> G[N],vis(N);

void dfs(int s){
	vis[s]=1;
	for(int i:G[s])	if(!vis[i])	dfs(i);
}


signed main(){
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k,x,y,i,ans=0;
	cin >> n ;
	for (int i = 1; i<=n; ++i){
		cin>>x;
		G[i].pb(x);
		G[x].pb(i);
	}
	for(int i=1;i<=n;i++)
		if(!vis[i]){
			ans++;dfs(i);
		}
	cout<<ans;
	
	return 0;
}
 