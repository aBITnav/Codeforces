#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define N 200010
vector<int> G[N],sum(N),l(N),vis(N);

void dfs(int s){
	vis[s]=1;
	for(int i:G[s])
		if(!vis[i]){
			l[i]=l[s]+1;
			dfs(i);
			sum[s]+=(sum[i]+1);
		}
}


signed main(){
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k,x,y,i,ans=0;
	cin >> n >> k;
	rep(i,n-1) {
		cin >> x >> y;
		G[x].pb(y);
		G[y].pb(x);
	}
	dfs(1);
	vector<int> nodes;
	for(int i=1;i<=n;i++) nodes.pb(l[i]-sum[i]);
	sort(all(nodes));
	reverse(all(nodes));
	for(int i=0;i<min(k,n);i++) ans+=nodes[i];
	cout<<ans;

	
	return 0;
}
 